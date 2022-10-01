// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTALIASESREQUEST_H
#define QTAWS_LISTBOTALIASESREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotAliasesRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotAliasesRequest : public LexModelsV2Request {

public:
    ListBotAliasesRequest(const ListBotAliasesRequest &other);
    ListBotAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotAliasesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

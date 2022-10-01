// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTVERSIONSREQUEST_H
#define QTAWS_LISTBOTVERSIONSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotVersionsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotVersionsRequest : public LexModelsV2Request {

public:
    ListBotVersionsRequest(const ListBotVersionsRequest &other);
    ListBotVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotVersionsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

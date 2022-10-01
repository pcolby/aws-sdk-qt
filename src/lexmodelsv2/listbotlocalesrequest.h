// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTLOCALESREQUEST_H
#define QTAWS_LISTBOTLOCALESREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotLocalesRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotLocalesRequest : public LexModelsV2Request {

public:
    ListBotLocalesRequest(const ListBotLocalesRequest &other);
    ListBotLocalesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotLocalesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

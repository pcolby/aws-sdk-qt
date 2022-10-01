// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONSRESPONSE_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listsubscriptiondefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListSubscriptionDefinitionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListSubscriptionDefinitionsResponse(const ListSubscriptionDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubscriptionDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionDefinitionsResponse)
    Q_DISABLE_COPY(ListSubscriptionDefinitionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif

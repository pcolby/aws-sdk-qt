// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSRESPONSE_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listsubscriptiondefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListSubscriptionDefinitionVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListSubscriptionDefinitionVersionsResponse(const ListSubscriptionDefinitionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubscriptionDefinitionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListSubscriptionDefinitionVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif

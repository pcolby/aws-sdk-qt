// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONVERSIONSRESPONSE_H
#define QTAWS_LISTCONNECTORDEFINITIONVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listconnectordefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListConnectorDefinitionVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListConnectorDefinitionVersionsResponse(const ListConnectorDefinitionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConnectorDefinitionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListConnectorDefinitionVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif

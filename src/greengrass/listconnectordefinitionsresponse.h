// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORDEFINITIONSRESPONSE_H
#define QTAWS_LISTCONNECTORDEFINITIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listconnectordefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListConnectorDefinitionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListConnectorDefinitionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListConnectorDefinitionsResponse(const ListConnectorDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConnectorDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorDefinitionsResponse)
    Q_DISABLE_COPY(ListConnectorDefinitionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif

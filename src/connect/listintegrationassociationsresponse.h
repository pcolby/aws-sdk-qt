// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONASSOCIATIONSRESPONSE_H
#define QTAWS_LISTINTEGRATIONASSOCIATIONSRESPONSE_H

#include "connectresponse.h"
#include "listintegrationassociationsrequest.h"

namespace QtAws {
namespace Connect {

class ListIntegrationAssociationsResponsePrivate;

class QTAWSCONNECT_EXPORT ListIntegrationAssociationsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListIntegrationAssociationsResponse(const ListIntegrationAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIntegrationAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIntegrationAssociationsResponse)
    Q_DISABLE_COPY(ListIntegrationAssociationsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

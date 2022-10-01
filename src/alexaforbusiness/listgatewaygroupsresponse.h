// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYGROUPSRESPONSE_H
#define QTAWS_LISTGATEWAYGROUPSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listgatewaygroupsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListGatewayGroupsResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListGatewayGroupsResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListGatewayGroupsResponse(const ListGatewayGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGatewayGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewayGroupsResponse)
    Q_DISABLE_COPY(ListGatewayGroupsResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

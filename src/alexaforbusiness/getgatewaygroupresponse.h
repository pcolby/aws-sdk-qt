// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYGROUPRESPONSE_H
#define QTAWS_GETGATEWAYGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getgatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetGatewayGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetGatewayGroupResponse(const GetGatewayGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGatewayGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayGroupResponse)
    Q_DISABLE_COPY(GetGatewayGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

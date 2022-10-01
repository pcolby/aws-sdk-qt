// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYGROUPRESPONSE_H
#define QTAWS_UPDATEGATEWAYGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updategatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateGatewayGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateGatewayGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateGatewayGroupResponse(const UpdateGatewayGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewayGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayGroupResponse)
    Q_DISABLE_COPY(UpdateGatewayGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

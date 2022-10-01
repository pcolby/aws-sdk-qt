// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYGROUPRESPONSE_H
#define QTAWS_CREATEGATEWAYGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "creategatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateGatewayGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateGatewayGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    CreateGatewayGroupResponse(const CreateGatewayGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGatewayGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGatewayGroupResponse)
    Q_DISABLE_COPY(CreateGatewayGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

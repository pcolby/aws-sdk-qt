// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYGROUPRESPONSE_H
#define QTAWS_DELETEGATEWAYGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deletegatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteGatewayGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteGatewayGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteGatewayGroupResponse(const DeleteGatewayGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGatewayGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayGroupResponse)
    Q_DISABLE_COPY(DeleteGatewayGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERENDPOINTRESPONSE_H
#define QTAWS_UPDATEAPPINSTANCEUSERENDPOINTRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "updateappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserEndpointResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT UpdateAppInstanceUserEndpointResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    UpdateAppInstanceUserEndpointResponse(const UpdateAppInstanceUserEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAppInstanceUserEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(UpdateAppInstanceUserEndpointResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

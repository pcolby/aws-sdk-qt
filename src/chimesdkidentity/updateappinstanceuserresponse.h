// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERRESPONSE_H
#define QTAWS_UPDATEAPPINSTANCEUSERRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "updateappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT UpdateAppInstanceUserResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    UpdateAppInstanceUserResponse(const UpdateAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceUserResponse)
    Q_DISABLE_COPY(UpdateAppInstanceUserResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

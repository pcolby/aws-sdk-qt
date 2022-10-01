// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEUSERRESPONSE_H
#define QTAWS_CREATEAPPINSTANCEUSERRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "createappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceUserResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT CreateAppInstanceUserResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    CreateAppInstanceUserResponse(const CreateAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceUserResponse)
    Q_DISABLE_COPY(CreateAppInstanceUserResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

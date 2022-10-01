// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEUSERRESPONSE_H
#define QTAWS_DELETEAPPINSTANCEUSERRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "deleteappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceUserResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeleteAppInstanceUserResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    DeleteAppInstanceUserResponse(const DeleteAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceUserResponse)
    Q_DISABLE_COPY(DeleteAppInstanceUserResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

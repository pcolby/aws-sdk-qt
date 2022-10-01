// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEADMINRESPONSE_H
#define QTAWS_DELETEAPPINSTANCEADMINRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "deleteappinstanceadminrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceAdminResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeleteAppInstanceAdminResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    DeleteAppInstanceAdminResponse(const DeleteAppInstanceAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppInstanceAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceAdminResponse)
    Q_DISABLE_COPY(DeleteAppInstanceAdminResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

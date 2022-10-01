// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCERESPONSE_H
#define QTAWS_DELETEAPPINSTANCERESPONSE_H

#include "chimesdkidentityresponse.h"
#include "deleteappinstancerequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DeleteAppInstanceResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    DeleteAppInstanceResponse(const DeleteAppInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceResponse)
    Q_DISABLE_COPY(DeleteAppInstanceResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

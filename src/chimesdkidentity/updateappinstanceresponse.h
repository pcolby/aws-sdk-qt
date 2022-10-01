// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCERESPONSE_H
#define QTAWS_UPDATEAPPINSTANCERESPONSE_H

#include "chimesdkidentityresponse.h"
#include "updateappinstancerequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT UpdateAppInstanceResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    UpdateAppInstanceResponse(const UpdateAppInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAppInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppInstanceResponse)
    Q_DISABLE_COPY(UpdateAppInstanceResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif

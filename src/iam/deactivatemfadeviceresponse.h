// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEMFADEVICERESPONSE_H
#define QTAWS_DEACTIVATEMFADEVICERESPONSE_H

#include "iamresponse.h"
#include "deactivatemfadevicerequest.h"

namespace QtAws {
namespace Iam {

class DeactivateMFADeviceResponsePrivate;

class QTAWSIAM_EXPORT DeactivateMFADeviceResponse : public IamResponse {
    Q_OBJECT

public:
    DeactivateMFADeviceResponse(const DeactivateMFADeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateMFADeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateMFADeviceResponse)
    Q_DISABLE_COPY(DeactivateMFADeviceResponse)

};

} // namespace Iam
} // namespace QtAws

#endif

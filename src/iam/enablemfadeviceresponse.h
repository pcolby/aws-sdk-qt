// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMFADEVICERESPONSE_H
#define QTAWS_ENABLEMFADEVICERESPONSE_H

#include "iamresponse.h"
#include "enablemfadevicerequest.h"

namespace QtAws {
namespace Iam {

class EnableMFADeviceResponsePrivate;

class QTAWSIAM_EXPORT EnableMFADeviceResponse : public IamResponse {
    Q_OBJECT

public:
    EnableMFADeviceResponse(const EnableMFADeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableMFADeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableMFADeviceResponse)
    Q_DISABLE_COPY(EnableMFADeviceResponse)

};

} // namespace Iam
} // namespace QtAws

#endif

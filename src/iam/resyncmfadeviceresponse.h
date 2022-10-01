// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESYNCMFADEVICERESPONSE_H
#define QTAWS_RESYNCMFADEVICERESPONSE_H

#include "iamresponse.h"
#include "resyncmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class ResyncMFADeviceResponsePrivate;

class QTAWSIAM_EXPORT ResyncMFADeviceResponse : public IamResponse {
    Q_OBJECT

public:
    ResyncMFADeviceResponse(const ResyncMFADeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResyncMFADeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResyncMFADeviceResponse)
    Q_DISABLE_COPY(ResyncMFADeviceResponse)

};

} // namespace Iam
} // namespace QtAws

#endif

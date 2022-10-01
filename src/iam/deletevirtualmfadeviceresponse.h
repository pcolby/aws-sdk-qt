// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALMFADEVICERESPONSE_H
#define QTAWS_DELETEVIRTUALMFADEVICERESPONSE_H

#include "iamresponse.h"
#include "deletevirtualmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class DeleteVirtualMFADeviceResponsePrivate;

class QTAWSIAM_EXPORT DeleteVirtualMFADeviceResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteVirtualMFADeviceResponse(const DeleteVirtualMFADeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVirtualMFADeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualMFADeviceResponse)
    Q_DISABLE_COPY(DeleteVirtualMFADeviceResponse)

};

} // namespace Iam
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEPOOLRESPONSE_H
#define QTAWS_DELETEDEVICEPOOLRESPONSE_H

#include "devicefarmresponse.h"
#include "deletedevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteDevicePoolResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeleteDevicePoolResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    DeleteDevicePoolResponse(const DeleteDevicePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDevicePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDevicePoolResponse)
    Q_DISABLE_COPY(DeleteDevicePoolResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

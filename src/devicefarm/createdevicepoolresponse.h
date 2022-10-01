// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPOOLRESPONSE_H
#define QTAWS_CREATEDEVICEPOOLRESPONSE_H

#include "devicefarmresponse.h"
#include "createdevicepoolrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateDevicePoolResponsePrivate;

class QTAWSDEVICEFARM_EXPORT CreateDevicePoolResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    CreateDevicePoolResponse(const CreateDevicePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDevicePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDevicePoolResponse)
    Q_DISABLE_COPY(CreateDevicePoolResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

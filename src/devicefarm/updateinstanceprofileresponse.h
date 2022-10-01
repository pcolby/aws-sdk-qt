// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEPROFILERESPONSE_H
#define QTAWS_UPDATEINSTANCEPROFILERESPONSE_H

#include "devicefarmresponse.h"
#include "updateinstanceprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateInstanceProfileResponsePrivate;

class QTAWSDEVICEFARM_EXPORT UpdateInstanceProfileResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    UpdateInstanceProfileResponse(const UpdateInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceProfileResponse)
    Q_DISABLE_COPY(UpdateInstanceProfileResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

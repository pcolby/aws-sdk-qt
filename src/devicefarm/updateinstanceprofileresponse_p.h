// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEPROFILERESPONSE_P_H
#define QTAWS_UPDATEINSTANCEPROFILERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateInstanceProfileResponse;

class UpdateInstanceProfileResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit UpdateInstanceProfileResponsePrivate(UpdateInstanceProfileResponse * const q);

    void parseUpdateInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceProfileResponse)
    Q_DISABLE_COPY(UpdateInstanceProfileResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

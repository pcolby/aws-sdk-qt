// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPROFILERESPONSE_P_H
#define QTAWS_GETINSTANCEPROFILERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetInstanceProfileResponse;

class GetInstanceProfileResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetInstanceProfileResponsePrivate(GetInstanceProfileResponse * const q);

    void parseGetInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceProfileResponse)
    Q_DISABLE_COPY(GetInstanceProfileResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

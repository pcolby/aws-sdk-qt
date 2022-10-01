// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEPROFILERESPONSE_P_H
#define QTAWS_CREATEINSTANCEPROFILERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class CreateInstanceProfileResponse;

class CreateInstanceProfileResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit CreateInstanceProfileResponsePrivate(CreateInstanceProfileResponse * const q);

    void parseCreateInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstanceProfileResponse)
    Q_DISABLE_COPY(CreateInstanceProfileResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

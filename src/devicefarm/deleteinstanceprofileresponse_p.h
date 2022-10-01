// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEPROFILERESPONSE_P_H
#define QTAWS_DELETEINSTANCEPROFILERESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteInstanceProfileResponse;

class DeleteInstanceProfileResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteInstanceProfileResponsePrivate(DeleteInstanceProfileResponse * const q);

    void parseDeleteInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceProfileResponse)
    Q_DISABLE_COPY(DeleteInstanceProfileResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

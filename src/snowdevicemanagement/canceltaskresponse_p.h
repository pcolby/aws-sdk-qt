// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKRESPONSE_P_H
#define QTAWS_CANCELTASKRESPONSE_P_H

#include "snowdevicemanagementresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CancelTaskResponse;

class CancelTaskResponsePrivate : public SnowDeviceManagementResponsePrivate {

public:

    explicit CancelTaskResponsePrivate(CancelTaskResponse * const q);

    void parseCancelTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelTaskResponse)
    Q_DISABLE_COPY(CancelTaskResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif

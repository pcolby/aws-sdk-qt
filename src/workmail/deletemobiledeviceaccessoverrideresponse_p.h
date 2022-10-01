// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDERESPONSE_P_H
#define QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessOverrideResponse;

class DeleteMobileDeviceAccessOverrideResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteMobileDeviceAccessOverrideResponsePrivate(DeleteMobileDeviceAccessOverrideResponse * const q);

    void parseDeleteMobileDeviceAccessOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMobileDeviceAccessOverrideResponse)
    Q_DISABLE_COPY(DeleteMobileDeviceAccessOverrideResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif

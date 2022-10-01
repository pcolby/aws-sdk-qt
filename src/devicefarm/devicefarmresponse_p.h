// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVICEFARMRESPONSE_P_H
#define QTAWS_DEVICEFARMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmResponse;

class DeviceFarmResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DeviceFarmResponsePrivate(DeviceFarmResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeviceFarmResponse)
    Q_DISABLE_COPY(DeviceFarmResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

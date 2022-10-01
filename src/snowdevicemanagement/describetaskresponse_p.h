// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKRESPONSE_P_H
#define QTAWS_DESCRIBETASKRESPONSE_P_H

#include "snowdevicemanagementresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeTaskResponse;

class DescribeTaskResponsePrivate : public SnowDeviceManagementResponsePrivate {

public:

    explicit DescribeTaskResponsePrivate(DescribeTaskResponse * const q);

    void parseDescribeTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTaskResponse)
    Q_DISABLE_COPY(DescribeTaskResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif

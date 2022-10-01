// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGREGISTRATIONTASKRESPONSE_P_H
#define QTAWS_DESCRIBETHINGREGISTRATIONTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeThingRegistrationTaskResponse;

class DescribeThingRegistrationTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeThingRegistrationTaskResponsePrivate(DescribeThingRegistrationTaskResponse * const q);

    void parseDescribeThingRegistrationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThingRegistrationTaskResponse)
    Q_DISABLE_COPY(DescribeThingRegistrationTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINERESPONSE_P_H
#define QTAWS_DESCRIBESTATEMACHINERESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineResponse;

class DescribeStateMachineResponsePrivate : public SfnResponsePrivate {

public:

    explicit DescribeStateMachineResponsePrivate(DescribeStateMachineResponse * const q);

    void parseDescribeStateMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStateMachineResponse)
    Q_DISABLE_COPY(DescribeStateMachineResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif

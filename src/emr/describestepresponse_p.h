// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTEPRESPONSE_P_H
#define QTAWS_DESCRIBESTEPRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeStepResponse;

class DescribeStepResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeStepResponsePrivate(DescribeStepResponse * const q);

    void parseDescribeStepResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStepResponse)
    Q_DISABLE_COPY(DescribeStepResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

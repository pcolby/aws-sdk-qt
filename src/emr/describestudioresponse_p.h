// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIORESPONSE_P_H
#define QTAWS_DESCRIBESTUDIORESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeStudioResponse;

class DescribeStudioResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeStudioResponsePrivate(DescribeStudioResponse * const q);

    void parseDescribeStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStudioResponse)
    Q_DISABLE_COPY(DescribeStudioResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

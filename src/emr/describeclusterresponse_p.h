// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeClusterResponse;

class DescribeClusterResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeClusterResponsePrivate(DescribeClusterResponse * const q);

    void parseDescribeClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterResponse)
    Q_DISABLE_COPY(DescribeClusterResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

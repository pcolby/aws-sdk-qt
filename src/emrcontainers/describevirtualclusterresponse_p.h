// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALCLUSTERRESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALCLUSTERRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeVirtualClusterResponse;

class DescribeVirtualClusterResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit DescribeVirtualClusterResponsePrivate(DescribeVirtualClusterResponse * const q);

    void parseDescribeVirtualClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualClusterResponse)
    Q_DISABLE_COPY(DescribeVirtualClusterResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif

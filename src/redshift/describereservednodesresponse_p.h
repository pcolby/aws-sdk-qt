// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODESRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDNODESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodesResponse;

class DescribeReservedNodesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeReservedNodesResponsePrivate(DescribeReservedNodesResponse * const q);

    void parseDescribeReservedNodesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedNodesResponse)
    Q_DISABLE_COPY(DescribeReservedNodesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

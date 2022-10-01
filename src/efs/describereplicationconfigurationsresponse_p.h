// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeReplicationConfigurationsResponse;

class DescribeReplicationConfigurationsResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeReplicationConfigurationsResponsePrivate(DescribeReplicationConfigurationsResponse * const q);

    void parseDescribeReplicationConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationConfigurationsResponse)
    Q_DISABLE_COPY(DescribeReplicationConfigurationsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif

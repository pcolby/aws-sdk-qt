// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DescribeReplicationConfigurationTemplatesResponse;

class DescribeReplicationConfigurationTemplatesResponsePrivate : public DrsResponsePrivate {

public:

    explicit DescribeReplicationConfigurationTemplatesResponsePrivate(DescribeReplicationConfigurationTemplatesResponse * const q);

    void parseDescribeReplicationConfigurationTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationConfigurationTemplatesResponse)
    Q_DISABLE_COPY(DescribeReplicationConfigurationTemplatesResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif

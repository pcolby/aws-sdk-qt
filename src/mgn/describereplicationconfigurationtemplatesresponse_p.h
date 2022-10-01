// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESRESPONSE_P_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DescribeReplicationConfigurationTemplatesResponse;

class DescribeReplicationConfigurationTemplatesResponsePrivate : public MgnResponsePrivate {

public:

    explicit DescribeReplicationConfigurationTemplatesResponsePrivate(DescribeReplicationConfigurationTemplatesResponse * const q);

    void parseDescribeReplicationConfigurationTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationConfigurationTemplatesResponse)
    Q_DISABLE_COPY(DescribeReplicationConfigurationTemplatesResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif

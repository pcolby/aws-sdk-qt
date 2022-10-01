// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODECONFIGURATIONOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBENODECONFIGURATIONOPTIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeNodeConfigurationOptionsResponse;

class DescribeNodeConfigurationOptionsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeNodeConfigurationOptionsResponsePrivate(DescribeNodeConfigurationOptionsResponse * const q);

    void parseDescribeNodeConfigurationOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNodeConfigurationOptionsResponse)
    Q_DISABLE_COPY(DescribeNodeConfigurationOptionsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

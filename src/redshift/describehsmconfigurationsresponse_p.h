// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEHSMCONFIGURATIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmConfigurationsResponse;

class DescribeHsmConfigurationsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeHsmConfigurationsResponsePrivate(DescribeHsmConfigurationsResponse * const q);

    void parseDescribeHsmConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHsmConfigurationsResponse)
    Q_DISABLE_COPY(DescribeHsmConfigurationsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

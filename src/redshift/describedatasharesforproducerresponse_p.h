// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORPRODUCERRESPONSE_P_H
#define QTAWS_DESCRIBEDATASHARESFORPRODUCERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForProducerResponse;

class DescribeDataSharesForProducerResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeDataSharesForProducerResponsePrivate(DescribeDataSharesForProducerResponse * const q);

    void parseDescribeDataSharesForProducerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSharesForProducerResponse)
    Q_DISABLE_COPY(DescribeDataSharesForProducerResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

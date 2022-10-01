// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORCONSUMERRESPONSE_P_H
#define QTAWS_DESCRIBEDATASHARESFORCONSUMERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForConsumerResponse;

class DescribeDataSharesForConsumerResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeDataSharesForConsumerResponsePrivate(DescribeDataSharesForConsumerResponse * const q);

    void parseDescribeDataSharesForConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSharesForConsumerResponse)
    Q_DISABLE_COPY(DescribeDataSharesForConsumerResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

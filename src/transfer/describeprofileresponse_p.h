// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILERESPONSE_P_H
#define QTAWS_DESCRIBEPROFILERESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeProfileResponse;

class DescribeProfileResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeProfileResponsePrivate(DescribeProfileResponse * const q);

    void parseDescribeProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProfileResponse)
    Q_DISABLE_COPY(DescribeProfileResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif

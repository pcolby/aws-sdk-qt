// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSRESPONSE_P_H
#define QTAWS_DESCRIBEBACKUPSRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class DescribeBackupsResponse;

class DescribeBackupsResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit DescribeBackupsResponsePrivate(DescribeBackupsResponse * const q);

    void parseDescribeBackupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBackupsResponse)
    Q_DISABLE_COPY(DescribeBackupsResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

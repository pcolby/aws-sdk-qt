// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONS3RESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONS3RESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationS3Response;

class DescribeLocationS3ResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationS3ResponsePrivate(DescribeLocationS3Response * const q);

    void parseDescribeLocationS3Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationS3Response)
    Q_DISABLE_COPY(DescribeLocationS3ResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif

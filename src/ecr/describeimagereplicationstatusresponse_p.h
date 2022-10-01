// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DescribeImageReplicationStatusResponse;

class DescribeImageReplicationStatusResponsePrivate : public EcrResponsePrivate {

public:

    explicit DescribeImageReplicationStatusResponsePrivate(DescribeImageReplicationStatusResponse * const q);

    void parseDescribeImageReplicationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageReplicationStatusResponse)
    Q_DISABLE_COPY(DescribeImageReplicationStatusResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

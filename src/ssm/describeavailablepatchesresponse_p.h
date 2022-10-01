// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABLEPATCHESRESPONSE_P_H
#define QTAWS_DESCRIBEAVAILABLEPATCHESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeAvailablePatchesResponse;

class DescribeAvailablePatchesResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeAvailablePatchesResponsePrivate(DescribeAvailablePatchesResponse * const q);

    void parseDescribeAvailablePatchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAvailablePatchesResponse)
    Q_DISABLE_COPY(DescribeAvailablePatchesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBENODEGROUPRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DescribeNodegroupResponse;

class DescribeNodegroupResponsePrivate : public EksResponsePrivate {

public:

    explicit DescribeNodegroupResponsePrivate(DescribeNodegroupResponse * const q);

    void parseDescribeNodegroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNodegroupResponse)
    Q_DISABLE_COPY(DescribeNodegroupResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

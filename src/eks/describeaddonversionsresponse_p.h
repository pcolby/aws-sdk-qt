// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEADDONVERSIONSRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DescribeAddonVersionsResponse;

class DescribeAddonVersionsResponsePrivate : public EksResponsePrivate {

public:

    explicit DescribeAddonVersionsResponsePrivate(DescribeAddonVersionsResponse * const q);

    void parseDescribeAddonVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAddonVersionsResponse)
    Q_DISABLE_COPY(DescribeAddonVersionsResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeAccountAttributesResponse;

class DescribeAccountAttributesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeAccountAttributesResponsePrivate(DescribeAccountAttributesResponse * const q);

    void parseDescribeAccountAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAttributesResponse)
    Q_DISABLE_COPY(DescribeAccountAttributesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

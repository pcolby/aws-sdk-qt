// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNERSRESPONSE_P_H
#define QTAWS_DESCRIBEPARTNERSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribePartnersResponse;

class DescribePartnersResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribePartnersResponsePrivate(DescribePartnersResponse * const q);

    void parseDescribePartnersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePartnersResponse)
    Q_DISABLE_COPY(DescribePartnersResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

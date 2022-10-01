// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXFIELDSRESPONSE_P_H
#define QTAWS_DESCRIBEINDEXFIELDSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DescribeIndexFieldsResponse;

class DescribeIndexFieldsResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DescribeIndexFieldsResponsePrivate(DescribeIndexFieldsResponse * const q);

    void parseDescribeIndexFieldsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIndexFieldsResponse)
    Q_DISABLE_COPY(DescribeIndexFieldsResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

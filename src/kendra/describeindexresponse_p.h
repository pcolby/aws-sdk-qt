// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXRESPONSE_P_H
#define QTAWS_DESCRIBEINDEXRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeIndexResponse;

class DescribeIndexResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeIndexResponsePrivate(DescribeIndexResponse * const q);

    void parseDescribeIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIndexResponse)
    Q_DISABLE_COPY(DescribeIndexResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif

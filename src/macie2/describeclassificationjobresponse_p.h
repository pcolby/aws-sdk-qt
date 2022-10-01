// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLASSIFICATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBECLASSIFICATIONJOBRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DescribeClassificationJobResponse;

class DescribeClassificationJobResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DescribeClassificationJobResponsePrivate(DescribeClassificationJobResponse * const q);

    void parseDescribeClassificationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClassificationJobResponse)
    Q_DISABLE_COPY(DescribeClassificationJobResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif

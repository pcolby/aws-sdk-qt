// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERELEASELABELRESPONSE_P_H
#define QTAWS_DESCRIBERELEASELABELRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeReleaseLabelResponse;

class DescribeReleaseLabelResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeReleaseLabelResponsePrivate(DescribeReleaseLabelResponse * const q);

    void parseDescribeReleaseLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReleaseLabelResponse)
    Q_DISABLE_COPY(DescribeReleaseLabelResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

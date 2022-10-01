// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLETASKSRESPONSE_P_H
#define QTAWS_DESCRIBEBUNDLETASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeBundleTasksResponse;

class DescribeBundleTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeBundleTasksResponsePrivate(DescribeBundleTasksResponse * const q);

    void parseDescribeBundleTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBundleTasksResponse)
    Q_DISABLE_COPY(DescribeBundleTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

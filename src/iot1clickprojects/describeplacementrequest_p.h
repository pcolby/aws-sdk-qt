// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTREQUEST_P_H
#define QTAWS_DESCRIBEPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "describeplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DescribePlacementRequest;

class DescribePlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    DescribePlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   DescribePlacementRequest * const q);
    DescribePlacementRequestPrivate(const DescribePlacementRequestPrivate &other,
                                   DescribePlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif

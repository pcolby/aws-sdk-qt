// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETEXPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEDATASETEXPORTJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "describedatasetexportjobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetExportJobRequest;

class DescribeDatasetExportJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeDatasetExportJobRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeDatasetExportJobRequest * const q);
    DescribeDatasetExportJobRequestPrivate(const DescribeDatasetExportJobRequestPrivate &other,
                                   DescribeDatasetExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetExportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

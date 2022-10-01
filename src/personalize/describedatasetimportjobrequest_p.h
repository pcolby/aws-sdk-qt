// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETIMPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEDATASETIMPORTJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "describedatasetimportjobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetImportJobRequest;

class DescribeDatasetImportJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeDatasetImportJobRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeDatasetImportJobRequest * const q);
    DescribeDatasetImportJobRequestPrivate(const DescribeDatasetImportJobRequestPrivate &other,
                                   DescribeDatasetImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetImportJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

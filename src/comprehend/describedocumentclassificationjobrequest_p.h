// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFICATIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describedocumentclassificationjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassificationJobRequest;

class DescribeDocumentClassificationJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeDocumentClassificationJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeDocumentClassificationJobRequest * const q);
    DescribeDocumentClassificationJobRequestPrivate(const DescribeDocumentClassificationJobRequestPrivate &other,
                                   DescribeDocumentClassificationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentClassificationJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

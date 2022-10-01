// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFIERREQUEST_P_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFIERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describedocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassifierRequest;

class DescribeDocumentClassifierRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeDocumentClassifierRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeDocumentClassifierRequest * const q);
    DescribeDocumentClassifierRequestPrivate(const DescribeDocumentClassifierRequestPrivate &other,
                                   DescribeDocumentClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

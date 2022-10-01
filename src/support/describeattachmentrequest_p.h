// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACHMENTREQUEST_P_H
#define QTAWS_DESCRIBEATTACHMENTREQUEST_P_H

#include "supportrequest_p.h"
#include "describeattachmentrequest.h"

namespace QtAws {
namespace Support {

class DescribeAttachmentRequest;

class DescribeAttachmentRequestPrivate : public SupportRequestPrivate {

public:
    DescribeAttachmentRequestPrivate(const SupportRequest::Action action,
                                   DescribeAttachmentRequest * const q);
    DescribeAttachmentRequestPrivate(const DescribeAttachmentRequestPrivate &other,
                                   DescribeAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAttachmentRequest)

};

} // namespace Support
} // namespace QtAws

#endif

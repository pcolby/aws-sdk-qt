// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTREQUEST_P_H
#define QTAWS_DESCRIBEDOCUMENTREQUEST_P_H

#include "ssmrequest_p.h"
#include "describedocumentrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeDocumentRequest;

class DescribeDocumentRequestPrivate : public SsmRequestPrivate {

public:
    DescribeDocumentRequestPrivate(const SsmRequest::Action action,
                                   DescribeDocumentRequest * const q);
    DescribeDocumentRequestPrivate(const DescribeDocumentRequestPrivate &other,
                                   DescribeDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDocumentRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

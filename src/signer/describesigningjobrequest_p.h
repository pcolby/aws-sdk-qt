// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNINGJOBREQUEST_P_H
#define QTAWS_DESCRIBESIGNINGJOBREQUEST_P_H

#include "signerrequest_p.h"
#include "describesigningjobrequest.h"

namespace QtAws {
namespace Signer {

class DescribeSigningJobRequest;

class DescribeSigningJobRequestPrivate : public SignerRequestPrivate {

public:
    DescribeSigningJobRequestPrivate(const SignerRequest::Action action,
                                   DescribeSigningJobRequest * const q);
    DescribeSigningJobRequestPrivate(const DescribeSigningJobRequestPrivate &other,
                                   DescribeSigningJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSigningJobRequest)

};

} // namespace Signer
} // namespace QtAws

#endif

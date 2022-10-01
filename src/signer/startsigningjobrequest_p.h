// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIGNINGJOBREQUEST_P_H
#define QTAWS_STARTSIGNINGJOBREQUEST_P_H

#include "signerrequest_p.h"
#include "startsigningjobrequest.h"

namespace QtAws {
namespace Signer {

class StartSigningJobRequest;

class StartSigningJobRequestPrivate : public SignerRequestPrivate {

public:
    StartSigningJobRequestPrivate(const SignerRequest::Action action,
                                   StartSigningJobRequest * const q);
    StartSigningJobRequestPrivate(const StartSigningJobRequestPrivate &other,
                                   StartSigningJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSigningJobRequest)

};

} // namespace Signer
} // namespace QtAws

#endif

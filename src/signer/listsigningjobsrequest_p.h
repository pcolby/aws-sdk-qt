// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGJOBSREQUEST_P_H
#define QTAWS_LISTSIGNINGJOBSREQUEST_P_H

#include "signerrequest_p.h"
#include "listsigningjobsrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningJobsRequest;

class ListSigningJobsRequestPrivate : public SignerRequestPrivate {

public:
    ListSigningJobsRequestPrivate(const SignerRequest::Action action,
                                   ListSigningJobsRequest * const q);
    ListSigningJobsRequestPrivate(const ListSigningJobsRequestPrivate &other,
                                   ListSigningJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSigningJobsRequest)

};

} // namespace Signer
} // namespace QtAws

#endif

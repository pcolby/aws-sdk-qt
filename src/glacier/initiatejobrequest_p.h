// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEJOBREQUEST_P_H
#define QTAWS_INITIATEJOBREQUEST_P_H

#include "glacierrequest_p.h"
#include "initiatejobrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateJobRequest;

class InitiateJobRequestPrivate : public GlacierRequestPrivate {

public:
    InitiateJobRequestPrivate(const GlacierRequest::Action action,
                                   InitiateJobRequest * const q);
    InitiateJobRequestPrivate(const InitiateJobRequestPrivate &other,
                                   InitiateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateJobRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif

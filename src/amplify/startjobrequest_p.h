// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBREQUEST_P_H
#define QTAWS_STARTJOBREQUEST_P_H

#include "amplifyrequest_p.h"
#include "startjobrequest.h"

namespace QtAws {
namespace Amplify {

class StartJobRequest;

class StartJobRequestPrivate : public AmplifyRequestPrivate {

public:
    StartJobRequestPrivate(const AmplifyRequest::Action action,
                                   StartJobRequest * const q);
    StartJobRequestPrivate(const StartJobRequestPrivate &other,
                                   StartJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartJobRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOVERYREQUEST_P_H
#define QTAWS_STARTRECOVERYREQUEST_P_H

#include "drsrequest_p.h"
#include "startrecoveryrequest.h"

namespace QtAws {
namespace Drs {

class StartRecoveryRequest;

class StartRecoveryRequestPrivate : public DrsRequestPrivate {

public:
    StartRecoveryRequestPrivate(const DrsRequest::Action action,
                                   StartRecoveryRequest * const q);
    StartRecoveryRequestPrivate(const StartRecoveryRequestPrivate &other,
                                   StartRecoveryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRecoveryRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

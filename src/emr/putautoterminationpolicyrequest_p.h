// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOTERMINATIONPOLICYREQUEST_P_H
#define QTAWS_PUTAUTOTERMINATIONPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "putautoterminationpolicyrequest.h"

namespace QtAws {
namespace Emr {

class PutAutoTerminationPolicyRequest;

class PutAutoTerminationPolicyRequestPrivate : public EmrRequestPrivate {

public:
    PutAutoTerminationPolicyRequestPrivate(const EmrRequest::Action action,
                                   PutAutoTerminationPolicyRequest * const q);
    PutAutoTerminationPolicyRequestPrivate(const PutAutoTerminationPolicyRequestPrivate &other,
                                   PutAutoTerminationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAutoTerminationPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

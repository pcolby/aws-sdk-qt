// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTERMINATIONPROTECTIONREQUEST_P_H
#define QTAWS_SETTERMINATIONPROTECTIONREQUEST_P_H

#include "emrrequest_p.h"
#include "setterminationprotectionrequest.h"

namespace QtAws {
namespace Emr {

class SetTerminationProtectionRequest;

class SetTerminationProtectionRequestPrivate : public EmrRequestPrivate {

public:
    SetTerminationProtectionRequestPrivate(const EmrRequest::Action action,
                                   SetTerminationProtectionRequest * const q);
    SetTerminationProtectionRequestPrivate(const SetTerminationProtectionRequestPrivate &other,
                                   SetTerminationProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTerminationProtectionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

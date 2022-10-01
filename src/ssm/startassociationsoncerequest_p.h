// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSOCIATIONSONCEREQUEST_P_H
#define QTAWS_STARTASSOCIATIONSONCEREQUEST_P_H

#include "ssmrequest_p.h"
#include "startassociationsoncerequest.h"

namespace QtAws {
namespace Ssm {

class StartAssociationsOnceRequest;

class StartAssociationsOnceRequestPrivate : public SsmRequestPrivate {

public:
    StartAssociationsOnceRequestPrivate(const SsmRequest::Action action,
                                   StartAssociationsOnceRequest * const q);
    StartAssociationsOnceRequestPrivate(const StartAssociationsOnceRequestPrivate &other,
                                   StartAssociationsOnceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAssociationsOnceRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

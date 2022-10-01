// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETARGETSWITHJOBREQUEST_P_H
#define QTAWS_ASSOCIATETARGETSWITHJOBREQUEST_P_H

#include "iotrequest_p.h"
#include "associatetargetswithjobrequest.h"

namespace QtAws {
namespace IoT {

class AssociateTargetsWithJobRequest;

class AssociateTargetsWithJobRequestPrivate : public IoTRequestPrivate {

public:
    AssociateTargetsWithJobRequestPrivate(const IoTRequest::Action action,
                                   AssociateTargetsWithJobRequest * const q);
    AssociateTargetsWithJobRequestPrivate(const AssociateTargetsWithJobRequestPrivate &other,
                                   AssociateTargetsWithJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTargetsWithJobRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

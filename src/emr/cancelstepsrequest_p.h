// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTEPSREQUEST_P_H
#define QTAWS_CANCELSTEPSREQUEST_P_H

#include "emrrequest_p.h"
#include "cancelstepsrequest.h"

namespace QtAws {
namespace Emr {

class CancelStepsRequest;

class CancelStepsRequestPrivate : public EmrRequestPrivate {

public:
    CancelStepsRequestPrivate(const EmrRequest::Action action,
                                   CancelStepsRequest * const q);
    CancelStepsRequestPrivate(const CancelStepsRequestPrivate &other,
                                   CancelStepsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelStepsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

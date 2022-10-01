// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCEREQUEST_P_H
#define QTAWS_STOPINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "stopinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class StopInstanceRequest;

class StopInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    StopInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   StopInstanceRequest * const q);
    StopInstanceRequestPrivate(const StopInstanceRequestPrivate &other,
                                   StopInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

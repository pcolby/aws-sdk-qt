// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREQUEST_P_H
#define QTAWS_STARTINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "startinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class StartInstanceRequest;

class StartInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    StartInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   StartInstanceRequest * const q);
    StartInstanceRequestPrivate(const StartInstanceRequestPrivate &other,
                                   StartInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

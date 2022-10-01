// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERVOLUMEREQUEST_P_H
#define QTAWS_DEREGISTERVOLUMEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deregistervolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterVolumeRequest;

class DeregisterVolumeRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeregisterVolumeRequestPrivate(const OpsWorksRequest::Action action,
                                   DeregisterVolumeRequest * const q);
    DeregisterVolumeRequestPrivate(const DeregisterVolumeRequestPrivate &other,
                                   DeregisterVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

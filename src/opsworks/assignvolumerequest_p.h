// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNVOLUMEREQUEST_P_H
#define QTAWS_ASSIGNVOLUMEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "assignvolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class AssignVolumeRequest;

class AssignVolumeRequestPrivate : public OpsWorksRequestPrivate {

public:
    AssignVolumeRequestPrivate(const OpsWorksRequest::Action action,
                                   AssignVolumeRequest * const q);
    AssignVolumeRequestPrivate(const AssignVolumeRequestPrivate &other,
                                   AssignVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssignVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

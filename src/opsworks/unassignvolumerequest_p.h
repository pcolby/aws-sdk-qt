// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNVOLUMEREQUEST_P_H
#define QTAWS_UNASSIGNVOLUMEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "unassignvolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class UnassignVolumeRequest;

class UnassignVolumeRequestPrivate : public OpsWorksRequestPrivate {

public:
    UnassignVolumeRequestPrivate(const OpsWorksRequest::Action action,
                                   UnassignVolumeRequest * const q);
    UnassignVolumeRequestPrivate(const UnassignVolumeRequestPrivate &other,
                                   UnassignVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnassignVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOLUMEREQUEST_P_H
#define QTAWS_UPDATEVOLUMEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updatevolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateVolumeRequest;

class UpdateVolumeRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateVolumeRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateVolumeRequest * const q);
    UpdateVolumeRequestPrivate(const UpdateVolumeRequestPrivate &other,
                                   UpdateVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

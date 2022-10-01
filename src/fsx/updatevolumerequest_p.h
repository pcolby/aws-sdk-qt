// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOLUMEREQUEST_P_H
#define QTAWS_UPDATEVOLUMEREQUEST_P_H

#include "fsxrequest_p.h"
#include "updatevolumerequest.h"

namespace QtAws {
namespace FSx {

class UpdateVolumeRequest;

class UpdateVolumeRequestPrivate : public FSxRequestPrivate {

public:
    UpdateVolumeRequestPrivate(const FSxRequest::Action action,
                                   UpdateVolumeRequest * const q);
    UpdateVolumeRequestPrivate(const UpdateVolumeRequestPrivate &other,
                                   UpdateVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVolumeRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

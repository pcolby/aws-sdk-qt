// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEREQUEST_P_H
#define QTAWS_CREATEVOLUMEREQUEST_P_H

#include "fsxrequest_p.h"
#include "createvolumerequest.h"

namespace QtAws {
namespace FSx {

class CreateVolumeRequest;

class CreateVolumeRequestPrivate : public FSxRequestPrivate {

public:
    CreateVolumeRequestPrivate(const FSxRequest::Action action,
                                   CreateVolumeRequest * const q);
    CreateVolumeRequestPrivate(const CreateVolumeRequestPrivate &other,
                                   CreateVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVolumeRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

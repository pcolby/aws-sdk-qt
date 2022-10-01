// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMEREQUEST_P_H
#define QTAWS_DELETEVOLUMEREQUEST_P_H

#include "fsxrequest_p.h"
#include "deletevolumerequest.h"

namespace QtAws {
namespace FSx {

class DeleteVolumeRequest;

class DeleteVolumeRequestPrivate : public FSxRequestPrivate {

public:
    DeleteVolumeRequestPrivate(const FSxRequest::Action action,
                                   DeleteVolumeRequest * const q);
    DeleteVolumeRequestPrivate(const DeleteVolumeRequestPrivate &other,
                                   DeleteVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVolumeRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

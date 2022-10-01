// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERIMAGEREQUEST_P_H
#define QTAWS_DELETECONTAINERIMAGEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletecontainerimagerequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerImageRequest;

class DeleteContainerImageRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteContainerImageRequestPrivate(const LightsailRequest::Action action,
                                   DeleteContainerImageRequest * const q);
    DeleteContainerImageRequestPrivate(const DeleteContainerImageRequestPrivate &other,
                                   DeleteContainerImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContainerImageRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

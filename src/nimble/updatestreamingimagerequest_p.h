// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGIMAGEREQUEST_P_H
#define QTAWS_UPDATESTREAMINGIMAGEREQUEST_P_H

#include "nimblerequest_p.h"
#include "updatestreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStreamingImageRequest;

class UpdateStreamingImageRequestPrivate : public NimbleRequestPrivate {

public:
    UpdateStreamingImageRequestPrivate(const NimbleRequest::Action action,
                                   UpdateStreamingImageRequest * const q);
    UpdateStreamingImageRequestPrivate(const UpdateStreamingImageRequestPrivate &other,
                                   UpdateStreamingImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

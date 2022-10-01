// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGIMAGEREQUEST_P_H
#define QTAWS_DELETESTREAMINGIMAGEREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletestreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingImageRequest;

class DeleteStreamingImageRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteStreamingImageRequestPrivate(const NimbleRequest::Action action,
                                   DeleteStreamingImageRequest * const q);
    DeleteStreamingImageRequestPrivate(const DeleteStreamingImageRequestPrivate &other,
                                   DeleteStreamingImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

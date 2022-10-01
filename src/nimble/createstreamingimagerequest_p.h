// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGIMAGEREQUEST_P_H
#define QTAWS_CREATESTREAMINGIMAGEREQUEST_P_H

#include "nimblerequest_p.h"
#include "createstreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingImageRequest;

class CreateStreamingImageRequestPrivate : public NimbleRequestPrivate {

public:
    CreateStreamingImageRequestPrivate(const NimbleRequest::Action action,
                                   CreateStreamingImageRequest * const q);
    CreateStreamingImageRequestPrivate(const CreateStreamingImageRequestPrivate &other,
                                   CreateStreamingImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

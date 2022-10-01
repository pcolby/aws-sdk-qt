// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGIMAGEREQUEST_P_H
#define QTAWS_GETSTREAMINGIMAGEREQUEST_P_H

#include "nimblerequest_p.h"
#include "getstreamingimagerequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingImageRequest;

class GetStreamingImageRequestPrivate : public NimbleRequestPrivate {

public:
    GetStreamingImageRequestPrivate(const NimbleRequest::Action action,
                                   GetStreamingImageRequest * const q);
    GetStreamingImageRequestPrivate(const GetStreamingImageRequestPrivate &other,
                                   GetStreamingImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamingImageRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

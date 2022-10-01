// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGIMAGESREQUEST_P_H
#define QTAWS_LISTSTREAMINGIMAGESREQUEST_P_H

#include "nimblerequest_p.h"
#include "liststreamingimagesrequest.h"

namespace QtAws {
namespace Nimble {

class ListStreamingImagesRequest;

class ListStreamingImagesRequestPrivate : public NimbleRequestPrivate {

public:
    ListStreamingImagesRequestPrivate(const NimbleRequest::Action action,
                                   ListStreamingImagesRequest * const q);
    ListStreamingImagesRequestPrivate(const ListStreamingImagesRequestPrivate &other,
                                   ListStreamingImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamingImagesRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

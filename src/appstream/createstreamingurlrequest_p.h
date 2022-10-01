// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGURLREQUEST_P_H
#define QTAWS_CREATESTREAMINGURLREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createstreamingurlrequest.h"

namespace QtAws {
namespace AppStream {

class CreateStreamingURLRequest;

class CreateStreamingURLRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateStreamingURLRequestPrivate(const AppStreamRequest::Action action,
                                   CreateStreamingURLRequest * const q);
    CreateStreamingURLRequestPrivate(const CreateStreamingURLRequestPrivate &other,
                                   CreateStreamingURLRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamingURLRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

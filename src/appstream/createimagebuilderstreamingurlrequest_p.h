// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERSTREAMINGURLREQUEST_P_H
#define QTAWS_CREATEIMAGEBUILDERSTREAMINGURLREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createimagebuilderstreamingurlrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderStreamingURLRequest;

class CreateImageBuilderStreamingURLRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateImageBuilderStreamingURLRequestPrivate(const AppStreamRequest::Action action,
                                   CreateImageBuilderStreamingURLRequest * const q);
    CreateImageBuilderStreamingURLRequestPrivate(const CreateImageBuilderStreamingURLRequestPrivate &other,
                                   CreateImageBuilderStreamingURLRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageBuilderStreamingURLRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

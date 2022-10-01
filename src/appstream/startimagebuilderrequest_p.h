// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEBUILDERREQUEST_P_H
#define QTAWS_STARTIMAGEBUILDERREQUEST_P_H

#include "appstreamrequest_p.h"
#include "startimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class StartImageBuilderRequest;

class StartImageBuilderRequestPrivate : public AppStreamRequestPrivate {

public:
    StartImageBuilderRequestPrivate(const AppStreamRequest::Action action,
                                   StartImageBuilderRequest * const q);
    StartImageBuilderRequestPrivate(const StartImageBuilderRequestPrivate &other,
                                   StartImageBuilderRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

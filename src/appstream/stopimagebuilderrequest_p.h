// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMAGEBUILDERREQUEST_P_H
#define QTAWS_STOPIMAGEBUILDERREQUEST_P_H

#include "appstreamrequest_p.h"
#include "stopimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class StopImageBuilderRequest;

class StopImageBuilderRequestPrivate : public AppStreamRequestPrivate {

public:
    StopImageBuilderRequestPrivate(const AppStreamRequest::Action action,
                                   StopImageBuilderRequest * const q);
    StopImageBuilderRequestPrivate(const StopImageBuilderRequestPrivate &other,
                                   StopImageBuilderRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

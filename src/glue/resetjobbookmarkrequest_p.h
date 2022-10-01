// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETJOBBOOKMARKREQUEST_P_H
#define QTAWS_RESETJOBBOOKMARKREQUEST_P_H

#include "gluerequest_p.h"
#include "resetjobbookmarkrequest.h"

namespace QtAws {
namespace Glue {

class ResetJobBookmarkRequest;

class ResetJobBookmarkRequestPrivate : public GlueRequestPrivate {

public:
    ResetJobBookmarkRequestPrivate(const GlueRequest::Action action,
                                   ResetJobBookmarkRequest * const q);
    ResetJobBookmarkRequestPrivate(const ResetJobBookmarkRequestPrivate &other,
                                   ResetJobBookmarkRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetJobBookmarkRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBBOOKMARKREQUEST_P_H
#define QTAWS_GETJOBBOOKMARKREQUEST_P_H

#include "gluerequest_p.h"
#include "getjobbookmarkrequest.h"

namespace QtAws {
namespace Glue {

class GetJobBookmarkRequest;

class GetJobBookmarkRequestPrivate : public GlueRequestPrivate {

public:
    GetJobBookmarkRequestPrivate(const GlueRequest::Action action,
                                   GetJobBookmarkRequest * const q);
    GetJobBookmarkRequestPrivate(const GetJobBookmarkRequestPrivate &other,
                                   GetJobBookmarkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobBookmarkRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

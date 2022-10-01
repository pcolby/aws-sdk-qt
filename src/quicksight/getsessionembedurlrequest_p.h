// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONEMBEDURLREQUEST_P_H
#define QTAWS_GETSESSIONEMBEDURLREQUEST_P_H

#include "quicksightrequest_p.h"
#include "getsessionembedurlrequest.h"

namespace QtAws {
namespace QuickSight {

class GetSessionEmbedUrlRequest;

class GetSessionEmbedUrlRequestPrivate : public QuickSightRequestPrivate {

public:
    GetSessionEmbedUrlRequestPrivate(const QuickSightRequest::Action action,
                                   GetSessionEmbedUrlRequest * const q);
    GetSessionEmbedUrlRequestPrivate(const GetSessionEmbedUrlRequestPrivate &other,
                                   GetSessionEmbedUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSessionEmbedUrlRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

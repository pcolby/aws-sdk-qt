// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGEREQUEST_P_H
#define QTAWS_COPYIMAGEREQUEST_P_H

#include "appstreamrequest_p.h"
#include "copyimagerequest.h"

namespace QtAws {
namespace AppStream {

class CopyImageRequest;

class CopyImageRequestPrivate : public AppStreamRequestPrivate {

public:
    CopyImageRequestPrivate(const AppStreamRequest::Action action,
                                   CopyImageRequest * const q);
    CopyImageRequestPrivate(const CopyImageRequestPrivate &other,
                                   CopyImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyImageRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

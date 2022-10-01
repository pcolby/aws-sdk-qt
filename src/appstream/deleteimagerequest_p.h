// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEREQUEST_P_H
#define QTAWS_DELETEIMAGEREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deleteimagerequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImageRequest;

class DeleteImageRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteImageRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteImageRequest * const q);
    DeleteImageRequestPrivate(const DeleteImageRequestPrivate &other,
                                   DeleteImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImageRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif

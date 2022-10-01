// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINACCESSCONTROLREQUEST_P_H
#define QTAWS_DELETEORIGINACCESSCONTROLREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deleteoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginAccessControlRequest;

class DeleteOriginAccessControlRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteOriginAccessControlRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteOriginAccessControlRequest * const q);
    DeleteOriginAccessControlRequestPrivate(const DeleteOriginAccessControlRequestPrivate &other,
                                   DeleteOriginAccessControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOriginAccessControlRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

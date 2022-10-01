// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINACCESSCONTROLSREQUEST_P_H
#define QTAWS_LISTORIGINACCESSCONTROLSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listoriginaccesscontrolsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginAccessControlsRequest;

class ListOriginAccessControlsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListOriginAccessControlsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListOriginAccessControlsRequest * const q);
    ListOriginAccessControlsRequestPrivate(const ListOriginAccessControlsRequestPrivate &other,
                                   ListOriginAccessControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOriginAccessControlsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

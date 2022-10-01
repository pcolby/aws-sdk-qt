// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVALIDATIONSREQUEST_P_H
#define QTAWS_LISTINVALIDATIONSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listinvalidationsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListInvalidationsRequest;

class ListInvalidationsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListInvalidationsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListInvalidationsRequest * const q);
    ListInvalidationsRequestPrivate(const ListInvalidationsRequestPrivate &other,
                                   ListInvalidationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInvalidationsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_P_H
#define QTAWS_TAGRESOURCEREQUEST_P_H

#include "m2request_p.h"
#include "tagresourcerequest.h"

namespace QtAws {
namespace M2 {

class TagResourceRequest;

class TagResourceRequestPrivate : public M2RequestPrivate {

public:
    TagResourceRequestPrivate(const M2Request::Action action,
                                   TagResourceRequest * const q);
    TagResourceRequestPrivate(const TagResourceRequestPrivate &other,
                                   TagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagResourceRequest)

};

} // namespace M2
} // namespace QtAws

#endif

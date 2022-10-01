// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_P_H
#define QTAWS_TAGRESOURCEREQUEST_P_H

#include "greengrassrequest_p.h"
#include "tagresourcerequest.h"

namespace QtAws {
namespace Greengrass {

class TagResourceRequest;

class TagResourceRequestPrivate : public GreengrassRequestPrivate {

public:
    TagResourceRequestPrivate(const GreengrassRequest::Action action,
                                   TagResourceRequest * const q);
    TagResourceRequestPrivate(const TagResourceRequestPrivate &other,
                                   TagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagResourceRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

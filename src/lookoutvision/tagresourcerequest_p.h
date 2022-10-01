// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_P_H
#define QTAWS_TAGRESOURCEREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "tagresourcerequest.h"

namespace QtAws {
namespace LookoutVision {

class TagResourceRequest;

class TagResourceRequestPrivate : public LookoutVisionRequestPrivate {

public:
    TagResourceRequestPrivate(const LookoutVisionRequest::Action action,
                                   TagResourceRequest * const q);
    TagResourceRequestPrivate(const TagResourceRequestPrivate &other,
                                   TagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagResourceRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

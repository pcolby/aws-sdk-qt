// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSREQUEST_P_H
#define QTAWS_REMOVETAGSREQUEST_P_H

#include "emrrequest_p.h"
#include "removetagsrequest.h"

namespace QtAws {
namespace Emr {

class RemoveTagsRequest;

class RemoveTagsRequestPrivate : public EmrRequestPrivate {

public:
    RemoveTagsRequestPrivate(const EmrRequest::Action action,
                                   RemoveTagsRequest * const q);
    RemoveTagsRequestPrivate(const RemoveTagsRequestPrivate &other,
                                   RemoveTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

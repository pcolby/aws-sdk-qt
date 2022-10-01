// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSREQUEST_P_H
#define QTAWS_CREATETAGSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createtagsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateTagsRequest;

class CreateTagsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateTagsRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateTagsRequest * const q);
    CreateTagsRequestPrivate(const CreateTagsRequestPrivate &other,
                                   CreateTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTagsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

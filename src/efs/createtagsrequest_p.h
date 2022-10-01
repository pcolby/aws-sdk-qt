// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSREQUEST_P_H
#define QTAWS_CREATETAGSREQUEST_P_H

#include "efsrequest_p.h"
#include "createtagsrequest.h"

namespace QtAws {
namespace Efs {

class CreateTagsRequest;

class CreateTagsRequestPrivate : public EfsRequestPrivate {

public:
    CreateTagsRequestPrivate(const EfsRequest::Action action,
                                   CreateTagsRequest * const q);
    CreateTagsRequestPrivate(const CreateTagsRequestPrivate &other,
                                   CreateTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTagsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif

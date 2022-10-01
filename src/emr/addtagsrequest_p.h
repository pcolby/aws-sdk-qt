// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSREQUEST_P_H
#define QTAWS_ADDTAGSREQUEST_P_H

#include "emrrequest_p.h"
#include "addtagsrequest.h"

namespace QtAws {
namespace Emr {

class AddTagsRequest;

class AddTagsRequestPrivate : public EmrRequestPrivate {

public:
    AddTagsRequestPrivate(const EmrRequest::Action action,
                                   AddTagsRequest * const q);
    AddTagsRequestPrivate(const AddTagsRequestPrivate &other,
                                   AddTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

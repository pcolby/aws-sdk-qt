// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLFTAGSREQUEST_P_H
#define QTAWS_LISTLFTAGSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "listlftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListLFTagsRequest;

class ListLFTagsRequestPrivate : public LakeFormationRequestPrivate {

public:
    ListLFTagsRequestPrivate(const LakeFormationRequest::Action action,
                                   ListLFTagsRequest * const q);
    ListLFTagsRequestPrivate(const ListLFTagsRequestPrivate &other,
                                   ListLFTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

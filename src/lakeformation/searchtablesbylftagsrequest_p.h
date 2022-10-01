// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESBYLFTAGSREQUEST_P_H
#define QTAWS_SEARCHTABLESBYLFTAGSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "searchtablesbylftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class SearchTablesByLFTagsRequest;

class SearchTablesByLFTagsRequestPrivate : public LakeFormationRequestPrivate {

public:
    SearchTablesByLFTagsRequestPrivate(const LakeFormationRequest::Action action,
                                   SearchTablesByLFTagsRequest * const q);
    SearchTablesByLFTagsRequestPrivate(const SearchTablesByLFTagsRequestPrivate &other,
                                   SearchTablesByLFTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchTablesByLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

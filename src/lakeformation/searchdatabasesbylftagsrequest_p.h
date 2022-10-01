// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDATABASESBYLFTAGSREQUEST_P_H
#define QTAWS_SEARCHDATABASESBYLFTAGSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "searchdatabasesbylftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class SearchDatabasesByLFTagsRequest;

class SearchDatabasesByLFTagsRequestPrivate : public LakeFormationRequestPrivate {

public:
    SearchDatabasesByLFTagsRequestPrivate(const LakeFormationRequest::Action action,
                                   SearchDatabasesByLFTagsRequest * const q);
    SearchDatabasesByLFTagsRequestPrivate(const SearchDatabasesByLFTagsRequestPrivate &other,
                                   SearchDatabasesByLFTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchDatabasesByLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

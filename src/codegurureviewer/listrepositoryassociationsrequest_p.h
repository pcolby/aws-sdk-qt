// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTREPOSITORYASSOCIATIONSREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "listrepositoryassociationsrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRepositoryAssociationsRequest;

class ListRepositoryAssociationsRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    ListRepositoryAssociationsRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   ListRepositoryAssociationsRequest * const q);
    ListRepositoryAssociationsRequestPrivate(const ListRepositoryAssociationsRequestPrivate &other,
                                   ListRepositoryAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRepositoryAssociationsRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

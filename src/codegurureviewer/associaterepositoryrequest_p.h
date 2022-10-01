// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEREPOSITORYREQUEST_P_H
#define QTAWS_ASSOCIATEREPOSITORYREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "associaterepositoryrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class AssociateRepositoryRequest;

class AssociateRepositoryRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    AssociateRepositoryRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   AssociateRepositoryRequest * const q);
    AssociateRepositoryRequestPrivate(const AssociateRepositoryRequestPrivate &other,
                                   AssociateRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateRepositoryRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

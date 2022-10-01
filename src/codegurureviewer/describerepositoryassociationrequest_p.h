// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYASSOCIATIONREQUEST_P_H
#define QTAWS_DESCRIBEREPOSITORYASSOCIATIONREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "describerepositoryassociationrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRepositoryAssociationRequest;

class DescribeRepositoryAssociationRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    DescribeRepositoryAssociationRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   DescribeRepositoryAssociationRequest * const q);
    DescribeRepositoryAssociationRequestPrivate(const DescribeRepositoryAssociationRequestPrivate &other,
                                   DescribeRepositoryAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoryAssociationRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

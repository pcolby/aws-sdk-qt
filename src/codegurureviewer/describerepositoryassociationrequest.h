// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYASSOCIATIONREQUEST_H
#define QTAWS_DESCRIBEREPOSITORYASSOCIATIONREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRepositoryAssociationRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DescribeRepositoryAssociationRequest : public CodeGuruReviewerRequest {

public:
    DescribeRepositoryAssociationRequest(const DescribeRepositoryAssociationRequest &other);
    DescribeRepositoryAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoryAssociationRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

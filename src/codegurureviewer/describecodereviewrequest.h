// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREVIEWREQUEST_H
#define QTAWS_DESCRIBECODEREVIEWREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeCodeReviewRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DescribeCodeReviewRequest : public CodeGuruReviewerRequest {

public:
    DescribeCodeReviewRequest(const DescribeCodeReviewRequest &other);
    DescribeCodeReviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeReviewRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

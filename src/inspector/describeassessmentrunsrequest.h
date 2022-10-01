// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTRUNSREQUEST_H
#define QTAWS_DESCRIBEASSESSMENTRUNSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentRunsRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeAssessmentRunsRequest : public InspectorRequest {

public:
    DescribeAssessmentRunsRequest(const DescribeAssessmentRunsRequest &other);
    DescribeAssessmentRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssessmentRunsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

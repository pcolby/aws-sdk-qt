// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTARGETSREQUEST_H
#define QTAWS_DESCRIBEASSESSMENTTARGETSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTargetsRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeAssessmentTargetsRequest : public InspectorRequest {

public:
    DescribeAssessmentTargetsRequest(const DescribeAssessmentTargetsRequest &other);
    DescribeAssessmentTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssessmentTargetsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

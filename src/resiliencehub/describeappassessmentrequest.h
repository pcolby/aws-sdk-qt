// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPASSESSMENTREQUEST_H
#define QTAWS_DESCRIBEAPPASSESSMENTREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppAssessmentRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppAssessmentRequest : public ResilienceHubRequest {

public:
    DescribeAppAssessmentRequest(const DescribeAppAssessmentRequest &other);
    DescribeAppAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppAssessmentRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTREQUEST_H
#define QTAWS_DESCRIBECOMPONENTREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeComponentRequest : public ApplicationInsightsRequest {

public:
    DescribeComponentRequest(const DescribeComponentRequest &other);
    DescribeComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComponentRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEREQUEST_H
#define QTAWS_DESCRIBESERVICEREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeServiceRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DescribeServiceRequest : public AppRunnerRequest {

public:
    DescribeServiceRequest(const DescribeServiceRequest &other);
    DescribeServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif

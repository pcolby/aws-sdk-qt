// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEERRORSREQUEST_H
#define QTAWS_DESCRIBESERVICEERRORSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeServiceErrorsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeServiceErrorsRequest : public OpsWorksRequest {

public:
    DescribeServiceErrorsRequest(const DescribeServiceErrorsRequest &other);
    DescribeServiceErrorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceErrorsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

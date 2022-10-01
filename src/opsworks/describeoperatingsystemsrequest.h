// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPERATINGSYSTEMSREQUEST_H
#define QTAWS_DESCRIBEOPERATINGSYSTEMSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeOperatingSystemsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeOperatingSystemsRequest : public OpsWorksRequest {

public:
    DescribeOperatingSystemsRequest(const DescribeOperatingSystemsRequest &other);
    DescribeOperatingSystemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOperatingSystemsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

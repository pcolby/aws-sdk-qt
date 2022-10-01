// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPSREQUEST_H
#define QTAWS_DESCRIBEAPPSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAppsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeAppsRequest : public OpsWorksRequest {

public:
    DescribeAppsRequest(const DescribeAppsRequest &other);
    DescribeAppsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

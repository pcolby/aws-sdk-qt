// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORPROFILESREQUEST_H
#define QTAWS_DESCRIBECONNECTORPROFILESREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorProfilesRequestPrivate;

class QTAWSAPPFLOW_EXPORT DescribeConnectorProfilesRequest : public AppflowRequest {

public:
    DescribeConnectorProfilesRequest(const DescribeConnectorProfilesRequest &other);
    DescribeConnectorProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorProfilesRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif

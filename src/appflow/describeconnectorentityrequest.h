// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORENTITYREQUEST_H
#define QTAWS_DESCRIBECONNECTORENTITYREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorEntityRequestPrivate;

class QTAWSAPPFLOW_EXPORT DescribeConnectorEntityRequest : public AppflowRequest {

public:
    DescribeConnectorEntityRequest(const DescribeConnectorEntityRequest &other);
    DescribeConnectorEntityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorEntityRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif

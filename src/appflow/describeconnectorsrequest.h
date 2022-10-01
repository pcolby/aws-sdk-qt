// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORSREQUEST_H
#define QTAWS_DESCRIBECONNECTORSREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorsRequestPrivate;

class QTAWSAPPFLOW_EXPORT DescribeConnectorsRequest : public AppflowRequest {

public:
    DescribeConnectorsRequest(const DescribeConnectorsRequest &other);
    DescribeConnectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectorsRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCONNECTORREQUEST_H
#define QTAWS_DESCRIBEVPCCONNECTORREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeVpcConnectorRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DescribeVpcConnectorRequest : public AppRunnerRequest {

public:
    DescribeVpcConnectorRequest(const DescribeVpcConnectorRequest &other);
    DescribeVpcConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcConnectorRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif

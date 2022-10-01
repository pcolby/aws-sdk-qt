// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTERCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEROUTERCONFIGURATIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeRouterConfigurationRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeRouterConfigurationRequest : public DirectConnectRequest {

public:
    DescribeRouterConfigurationRequest(const DescribeRouterConfigurationRequest &other);
    DescribeRouterConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouterConfigurationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

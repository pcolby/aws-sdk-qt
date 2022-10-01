// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "describeconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeConfigurationsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeConfigurationsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    DescribeConfigurationsResponse(const DescribeConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationsResponse)
    Q_DISABLE_COPY(DescribeConfigurationsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

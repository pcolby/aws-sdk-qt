// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSREQUEST_H
#define QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionResourcesResolutionStatusRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppVersionResourcesResolutionStatusRequest : public ResilienceHubRequest {

public:
    DescribeAppVersionResourcesResolutionStatusRequest(const DescribeAppVersionResourcesResolutionStatusRequest &other);
    DescribeAppVersionResourcesResolutionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppVersionResourcesResolutionStatusRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

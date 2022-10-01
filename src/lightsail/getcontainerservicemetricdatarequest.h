// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEMETRICDATAREQUEST_H
#define QTAWS_GETCONTAINERSERVICEMETRICDATAREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceMetricDataRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServiceMetricDataRequest : public LightsailRequest {

public:
    GetContainerServiceMetricDataRequest(const GetContainerServiceMetricDataRequest &other);
    GetContainerServiceMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServiceMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

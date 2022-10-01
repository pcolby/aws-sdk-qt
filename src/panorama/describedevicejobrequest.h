// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEJOBREQUEST_H
#define QTAWS_DESCRIBEDEVICEJOBREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DescribeDeviceJobRequestPrivate;

class QTAWSPANORAMA_EXPORT DescribeDeviceJobRequest : public PanoramaRequest {

public:
    DescribeDeviceJobRequest(const DescribeDeviceJobRequest &other);
    DescribeDeviceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

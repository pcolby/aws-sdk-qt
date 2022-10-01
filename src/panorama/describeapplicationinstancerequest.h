// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCEREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCEREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceRequestPrivate;

class QTAWSPANORAMA_EXPORT DescribeApplicationInstanceRequest : public PanoramaRequest {

public:
    DescribeApplicationInstanceRequest(const DescribeApplicationInstanceRequest &other);
    DescribeApplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationInstanceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

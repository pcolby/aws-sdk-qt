// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceDetailsRequestPrivate;

class QTAWSPANORAMA_EXPORT DescribeApplicationInstanceDetailsRequest : public PanoramaRequest {

public:
    DescribeApplicationInstanceDetailsRequest(const DescribeApplicationInstanceDetailsRequest &other);
    DescribeApplicationInstanceDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationInstanceDetailsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

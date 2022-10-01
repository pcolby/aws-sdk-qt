// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTALREQUEST_H
#define QTAWS_DESCRIBEPORTALREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribePortalRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribePortalRequest : public IoTSiteWiseRequest {

public:
    DescribePortalRequest(const DescribePortalRequest &other);
    DescribePortalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePortalRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

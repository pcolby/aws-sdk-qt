// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_H
#define QTAWS_DESCRIBEPROJECTREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeProjectRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeProjectRequest : public IoTSiteWiseRequest {

public:
    DescribeProjectRequest(const DescribeProjectRequest &other);
    DescribeProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

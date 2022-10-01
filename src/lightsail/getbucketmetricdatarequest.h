// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICDATAREQUEST_H
#define QTAWS_GETBUCKETMETRICDATAREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketMetricDataRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketMetricDataRequest : public LightsailRequest {

public:
    GetBucketMetricDataRequest(const GetBucketMetricDataRequest &other);
    GetBucketMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

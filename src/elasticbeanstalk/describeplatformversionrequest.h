// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLATFORMVERSIONREQUEST_H
#define QTAWS_DESCRIBEPLATFORMVERSIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribePlatformVersionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribePlatformVersionRequest : public ElasticBeanstalkRequest {

public:
    DescribePlatformVersionRequest(const DescribePlatformVersionRequest &other);
    DescribePlatformVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlatformVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMVERSIONSREQUEST_H
#define QTAWS_LISTPLATFORMVERSIONSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformVersionsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ListPlatformVersionsRequest : public ElasticBeanstalkRequest {

public:
    ListPlatformVersionsRequest(const ListPlatformVersionsRequest &other);
    ListPlatformVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlatformVersionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

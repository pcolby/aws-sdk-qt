// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTENVIRONMENTINFOREQUEST_H
#define QTAWS_REQUESTENVIRONMENTINFOREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RequestEnvironmentInfoRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT RequestEnvironmentInfoRequest : public ElasticBeanstalkRequest {

public:
    RequestEnvironmentInfoRequest(const RequestEnvironmentInfoRequest &other);
    RequestEnvironmentInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestEnvironmentInfoRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

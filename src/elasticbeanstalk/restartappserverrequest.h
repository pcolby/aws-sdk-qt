// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTAPPSERVERREQUEST_H
#define QTAWS_RESTARTAPPSERVERREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RestartAppServerRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT RestartAppServerRequest : public ElasticBeanstalkRequest {

public:
    RestartAppServerRequest(const RestartAppServerRequest &other);
    RestartAppServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestartAppServerRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEENVIRONMENTINFOREQUEST_H
#define QTAWS_RETRIEVEENVIRONMENTINFOREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RetrieveEnvironmentInfoRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT RetrieveEnvironmentInfoRequest : public ElasticBeanstalkRequest {

public:
    RetrieveEnvironmentInfoRequest(const RetrieveEnvironmentInfoRequest &other);
    RetrieveEnvironmentInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveEnvironmentInfoRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

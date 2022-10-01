// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTENVIRONMENTUPDATEREQUEST_H
#define QTAWS_ABORTENVIRONMENTUPDATEREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AbortEnvironmentUpdateRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT AbortEnvironmentUpdateRequest : public ElasticBeanstalkRequest {

public:
    AbortEnvironmentUpdateRequest(const AbortEnvironmentUpdateRequest &other);
    AbortEnvironmentUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortEnvironmentUpdateRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

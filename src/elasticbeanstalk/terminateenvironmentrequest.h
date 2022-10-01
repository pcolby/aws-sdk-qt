// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEENVIRONMENTREQUEST_H
#define QTAWS_TERMINATEENVIRONMENTREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class TerminateEnvironmentRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT TerminateEnvironmentRequest : public ElasticBeanstalkRequest {

public:
    TerminateEnvironmentRequest(const TerminateEnvironmentRequest &other);
    TerminateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateEnvironmentRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

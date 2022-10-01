// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPOSEENVIRONMENTSREQUEST_H
#define QTAWS_COMPOSEENVIRONMENTSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ComposeEnvironmentsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ComposeEnvironmentsRequest : public ElasticBeanstalkRequest {

public:
    ComposeEnvironmentsRequest(const ComposeEnvironmentsRequest &other);
    ComposeEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComposeEnvironmentsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

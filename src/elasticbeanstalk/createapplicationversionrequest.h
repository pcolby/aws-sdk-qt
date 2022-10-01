// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONVERSIONREQUEST_H
#define QTAWS_CREATEAPPLICATIONVERSIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateApplicationVersionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateApplicationVersionRequest : public ElasticBeanstalkRequest {

public:
    CreateApplicationVersionRequest(const CreateApplicationVersionRequest &other);
    CreateApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

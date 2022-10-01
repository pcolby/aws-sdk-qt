// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONVERSIONREQUEST_H
#define QTAWS_UPDATEAPPLICATIONVERSIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationVersionRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateApplicationVersionRequest : public ElasticBeanstalkRequest {

public:
    UpdateApplicationVersionRequest(const UpdateApplicationVersionRequest &other);
    UpdateApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

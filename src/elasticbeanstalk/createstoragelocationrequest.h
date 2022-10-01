// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGELOCATIONREQUEST_H
#define QTAWS_CREATESTORAGELOCATIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateStorageLocationRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateStorageLocationRequest : public ElasticBeanstalkRequest {

public:
    CreateStorageLocationRequest(const CreateStorageLocationRequest &other);
    CreateStorageLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStorageLocationRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

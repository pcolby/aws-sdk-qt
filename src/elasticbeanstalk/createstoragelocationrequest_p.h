// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGELOCATIONREQUEST_P_H
#define QTAWS_CREATESTORAGELOCATIONREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "createstoragelocationrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateStorageLocationRequest;

class CreateStorageLocationRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    CreateStorageLocationRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   CreateStorageLocationRequest * const q);
    CreateStorageLocationRequestPrivate(const CreateStorageLocationRequestPrivate &other,
                                   CreateStorageLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStorageLocationRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

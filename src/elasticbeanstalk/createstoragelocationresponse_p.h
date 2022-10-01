// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGELOCATIONRESPONSE_P_H
#define QTAWS_CREATESTORAGELOCATIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateStorageLocationResponse;

class CreateStorageLocationResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit CreateStorageLocationResponsePrivate(CreateStorageLocationResponse * const q);

    void parseCreateStorageLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStorageLocationResponse)
    Q_DISABLE_COPY(CreateStorageLocationResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

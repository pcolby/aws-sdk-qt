// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGELOCATIONRESPONSE_H
#define QTAWS_CREATESTORAGELOCATIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "createstoragelocationrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateStorageLocationResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateStorageLocationResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    CreateStorageLocationResponse(const CreateStorageLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStorageLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStorageLocationResponse)
    Q_DISABLE_COPY(CreateStorageLocationResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMVERSIONRESPONSE_H
#define QTAWS_CREATEPLATFORMVERSIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "createplatformversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreatePlatformVersionResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreatePlatformVersionResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    CreatePlatformVersionResponse(const CreatePlatformVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlatformVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlatformVersionResponse)
    Q_DISABLE_COPY(CreatePlatformVersionResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

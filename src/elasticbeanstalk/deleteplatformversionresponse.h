// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMVERSIONRESPONSE_H
#define QTAWS_DELETEPLATFORMVERSIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "deleteplatformversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeletePlatformVersionResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeletePlatformVersionResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DeletePlatformVersionResponse(const DeletePlatformVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlatformVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlatformVersionResponse)
    Q_DISABLE_COPY(DeletePlatformVersionResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

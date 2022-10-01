// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTENVIRONMENTINFORESPONSE_H
#define QTAWS_REQUESTENVIRONMENTINFORESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "requestenvironmentinforequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RequestEnvironmentInfoResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT RequestEnvironmentInfoResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    RequestEnvironmentInfoResponse(const RequestEnvironmentInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestEnvironmentInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestEnvironmentInfoResponse)
    Q_DISABLE_COPY(RequestEnvironmentInfoResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

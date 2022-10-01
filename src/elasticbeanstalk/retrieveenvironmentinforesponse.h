// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEENVIRONMENTINFORESPONSE_H
#define QTAWS_RETRIEVEENVIRONMENTINFORESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "retrieveenvironmentinforequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RetrieveEnvironmentInfoResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT RetrieveEnvironmentInfoResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    RetrieveEnvironmentInfoResponse(const RetrieveEnvironmentInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetrieveEnvironmentInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveEnvironmentInfoResponse)
    Q_DISABLE_COPY(RetrieveEnvironmentInfoResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

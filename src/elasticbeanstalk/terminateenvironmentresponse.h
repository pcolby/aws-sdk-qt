// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEENVIRONMENTRESPONSE_H
#define QTAWS_TERMINATEENVIRONMENTRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "terminateenvironmentrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class TerminateEnvironmentResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT TerminateEnvironmentResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    TerminateEnvironmentResponse(const TerminateEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateEnvironmentResponse)
    Q_DISABLE_COPY(TerminateEnvironmentResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

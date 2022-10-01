// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTAPPSERVERRESPONSE_H
#define QTAWS_RESTARTAPPSERVERRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "restartappserverrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RestartAppServerResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT RestartAppServerResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    RestartAppServerResponse(const RestartAppServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestartAppServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestartAppServerResponse)
    Q_DISABLE_COPY(RestartAppServerResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDENVIRONMENTRESPONSE_H
#define QTAWS_REBUILDENVIRONMENTRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "rebuildenvironmentrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class RebuildEnvironmentResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT RebuildEnvironmentResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    RebuildEnvironmentResponse(const RebuildEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebuildEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebuildEnvironmentResponse)
    Q_DISABLE_COPY(RebuildEnvironmentResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTENVIRONMENTUPDATERESPONSE_H
#define QTAWS_ABORTENVIRONMENTUPDATERESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "abortenvironmentupdaterequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class AbortEnvironmentUpdateResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT AbortEnvironmentUpdateResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    AbortEnvironmentUpdateResponse(const AbortEnvironmentUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AbortEnvironmentUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortEnvironmentUpdateResponse)
    Q_DISABLE_COPY(AbortEnvironmentUpdateResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

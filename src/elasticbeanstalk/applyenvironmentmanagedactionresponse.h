// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYENVIRONMENTMANAGEDACTIONRESPONSE_H
#define QTAWS_APPLYENVIRONMENTMANAGEDACTIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "applyenvironmentmanagedactionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ApplyEnvironmentManagedActionResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ApplyEnvironmentManagedActionResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    ApplyEnvironmentManagedActionResponse(const ApplyEnvironmentManagedActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApplyEnvironmentManagedActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyEnvironmentManagedActionResponse)
    Q_DISABLE_COPY(ApplyEnvironmentManagedActionResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

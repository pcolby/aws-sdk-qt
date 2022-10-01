// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONVERSIONRESPONSE_H
#define QTAWS_UPDATEAPPLICATIONVERSIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "updateapplicationversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateApplicationVersionResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT UpdateApplicationVersionResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    UpdateApplicationVersionResponse(const UpdateApplicationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationVersionResponse)
    Q_DISABLE_COPY(UpdateApplicationVersionResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

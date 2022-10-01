// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVERSIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONVERSIONRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "deleteapplicationversionrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteApplicationVersionResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT DeleteApplicationVersionResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    DeleteApplicationVersionResponse(const DeleteApplicationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationVersionResponse)
    Q_DISABLE_COPY(DeleteApplicationVersionResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

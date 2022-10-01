// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPOSEENVIRONMENTSRESPONSE_H
#define QTAWS_COMPOSEENVIRONMENTSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "composeenvironmentsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ComposeEnvironmentsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ComposeEnvironmentsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    ComposeEnvironmentsResponse(const ComposeEnvironmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ComposeEnvironmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComposeEnvironmentsResponse)
    Q_DISABLE_COPY(ComposeEnvironmentsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

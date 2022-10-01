// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWAPENVIRONMENTCNAMESRESPONSE_H
#define QTAWS_SWAPENVIRONMENTCNAMESRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "swapenvironmentcnamesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class SwapEnvironmentCNAMEsResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT SwapEnvironmentCNAMEsResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    SwapEnvironmentCNAMEsResponse(const SwapEnvironmentCNAMEsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SwapEnvironmentCNAMEsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SwapEnvironmentCNAMEsResponse)
    Q_DISABLE_COPY(SwapEnvironmentCNAMEsResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif

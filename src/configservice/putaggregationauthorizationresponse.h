// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAGGREGATIONAUTHORIZATIONRESPONSE_H
#define QTAWS_PUTAGGREGATIONAUTHORIZATIONRESPONSE_H

#include "configserviceresponse.h"
#include "putaggregationauthorizationrequest.h"

namespace QtAws {
namespace ConfigService {

class PutAggregationAuthorizationResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutAggregationAuthorizationResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutAggregationAuthorizationResponse(const PutAggregationAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAggregationAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAggregationAuthorizationResponse)
    Q_DISABLE_COPY(PutAggregationAuthorizationResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGGREGATIONAUTHORIZATIONRESPONSE_H
#define QTAWS_DELETEAGGREGATIONAUTHORIZATIONRESPONSE_H

#include "configserviceresponse.h"
#include "deleteaggregationauthorizationrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteAggregationAuthorizationResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteAggregationAuthorizationResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteAggregationAuthorizationResponse(const DeleteAggregationAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAggregationAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAggregationAuthorizationResponse)
    Q_DISABLE_COPY(DeleteAggregationAuthorizationResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

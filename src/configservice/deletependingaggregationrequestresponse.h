// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPENDINGAGGREGATIONREQUESTRESPONSE_H
#define QTAWS_DELETEPENDINGAGGREGATIONREQUESTRESPONSE_H

#include "configserviceresponse.h"
#include "deletependingaggregationrequestrequest.h"

namespace QtAws {
namespace ConfigService {

class DeletePendingAggregationRequestResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeletePendingAggregationRequestResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeletePendingAggregationRequestResponse(const DeletePendingAggregationRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePendingAggregationRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePendingAggregationRequestResponse)
    Q_DISABLE_COPY(DeletePendingAggregationRequestResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

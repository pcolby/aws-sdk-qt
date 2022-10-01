// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAGGREGATERESOURCECONFIGRESPONSE_H
#define QTAWS_BATCHGETAGGREGATERESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "batchgetaggregateresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class BatchGetAggregateResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT BatchGetAggregateResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    BatchGetAggregateResourceConfigResponse(const BatchGetAggregateResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetAggregateResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAggregateResourceConfigResponse)
    Q_DISABLE_COPY(BatchGetAggregateResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONAGGREGATORRESPONSE_H
#define QTAWS_PUTCONFIGURATIONAGGREGATORRESPONSE_H

#include "configserviceresponse.h"
#include "putconfigurationaggregatorrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationAggregatorResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConfigurationAggregatorResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutConfigurationAggregatorResponse(const PutConfigurationAggregatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigurationAggregatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationAggregatorResponse)
    Q_DISABLE_COPY(PutConfigurationAggregatorResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

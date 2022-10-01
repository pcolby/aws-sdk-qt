// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONAGGREGATORRESPONSE_H
#define QTAWS_DELETECONFIGURATIONAGGREGATORRESPONSE_H

#include "configserviceresponse.h"
#include "deleteconfigurationaggregatorrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationAggregatorResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConfigurationAggregatorResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteConfigurationAggregatorResponse(const DeleteConfigurationAggregatorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationAggregatorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationAggregatorResponse)
    Q_DISABLE_COPY(DeleteConfigurationAggregatorResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

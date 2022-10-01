// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTAGGREGATERESOURCECONFIGRESPONSE_H
#define QTAWS_SELECTAGGREGATERESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "selectaggregateresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class SelectAggregateResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT SelectAggregateResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    SelectAggregateResourceConfigResponse(const SelectAggregateResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SelectAggregateResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SelectAggregateResourceConfigResponse)
    Q_DISABLE_COPY(SelectAggregateResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

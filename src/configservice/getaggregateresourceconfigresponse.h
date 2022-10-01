// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATERESOURCECONFIGRESPONSE_H
#define QTAWS_GETAGGREGATERESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "getaggregateresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetAggregateResourceConfigResponse(const GetAggregateResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAggregateResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateResourceConfigResponse)
    Q_DISABLE_COPY(GetAggregateResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

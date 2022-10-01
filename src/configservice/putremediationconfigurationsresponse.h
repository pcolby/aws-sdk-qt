// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONCONFIGURATIONSRESPONSE_H
#define QTAWS_PUTREMEDIATIONCONFIGURATIONSRESPONSE_H

#include "configserviceresponse.h"
#include "putremediationconfigurationsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationConfigurationsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRemediationConfigurationsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutRemediationConfigurationsResponse(const PutRemediationConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRemediationConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRemediationConfigurationsResponse)
    Q_DISABLE_COPY(PutRemediationConfigurationsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

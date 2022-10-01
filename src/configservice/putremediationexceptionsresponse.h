// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONEXCEPTIONSRESPONSE_H
#define QTAWS_PUTREMEDIATIONEXCEPTIONSRESPONSE_H

#include "configserviceresponse.h"
#include "putremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationExceptionsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRemediationExceptionsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutRemediationExceptionsResponse(const PutRemediationExceptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRemediationExceptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRemediationExceptionsResponse)
    Q_DISABLE_COPY(PutRemediationExceptionsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

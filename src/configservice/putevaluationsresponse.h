// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVALUATIONSRESPONSE_H
#define QTAWS_PUTEVALUATIONSRESPONSE_H

#include "configserviceresponse.h"
#include "putevaluationsrequest.h"

namespace QtAws {
namespace ConfigService {

class PutEvaluationsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutEvaluationsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutEvaluationsResponse(const PutEvaluationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEvaluationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEvaluationsResponse)
    Q_DISABLE_COPY(PutEvaluationsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFORMANCEPACKRESPONSE_H
#define QTAWS_PUTCONFORMANCEPACKRESPONSE_H

#include "configserviceresponse.h"
#include "putconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConformancePackResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConformancePackResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutConformancePackResponse(const PutConformancePackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConformancePackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConformancePackResponse)
    Q_DISABLE_COPY(PutConformancePackResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

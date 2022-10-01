// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCECONFIGRESPONSE_H
#define QTAWS_PUTRESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "putresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class PutResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutResourceConfigResponse(const PutResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourceConfigResponse)
    Q_DISABLE_COPY(PutResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

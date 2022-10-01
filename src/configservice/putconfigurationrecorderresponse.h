// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONRECORDERRESPONSE_H
#define QTAWS_PUTCONFIGURATIONRECORDERRESPONSE_H

#include "configserviceresponse.h"
#include "putconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationRecorderResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConfigurationRecorderResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutConfigurationRecorderResponse(const PutConfigurationRecorderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigurationRecorderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationRecorderResponse)
    Q_DISABLE_COPY(PutConfigurationRecorderResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

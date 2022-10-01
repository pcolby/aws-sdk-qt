// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONFIGURATIONRECORDERRESPONSE_H
#define QTAWS_STOPCONFIGURATIONRECORDERRESPONSE_H

#include "configserviceresponse.h"
#include "stopconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class StopConfigurationRecorderResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT StopConfigurationRecorderResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    StopConfigurationRecorderResponse(const StopConfigurationRecorderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopConfigurationRecorderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopConfigurationRecorderResponse)
    Q_DISABLE_COPY(StopConfigurationRecorderResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

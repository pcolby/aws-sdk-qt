// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONRECORDERRESPONSE_H
#define QTAWS_STARTCONFIGURATIONRECORDERRESPONSE_H

#include "configserviceresponse.h"
#include "startconfigurationrecorderrequest.h"

namespace QtAws {
namespace ConfigService {

class StartConfigurationRecorderResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT StartConfigurationRecorderResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    StartConfigurationRecorderResponse(const StartConfigurationRecorderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartConfigurationRecorderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConfigurationRecorderResponse)
    Q_DISABLE_COPY(StartConfigurationRecorderResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

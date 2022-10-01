// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSESERVICERESPONSE_H
#define QTAWS_PAUSESERVICERESPONSE_H

#include "apprunnerresponse.h"
#include "pauseservicerequest.h"

namespace QtAws {
namespace AppRunner {

class PauseServiceResponsePrivate;

class QTAWSAPPRUNNER_EXPORT PauseServiceResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    PauseServiceResponse(const PauseServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PauseServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PauseServiceResponse)
    Q_DISABLE_COPY(PauseServiceResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif

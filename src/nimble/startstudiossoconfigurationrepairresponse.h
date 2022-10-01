// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTUDIOSSOCONFIGURATIONREPAIRRESPONSE_H
#define QTAWS_STARTSTUDIOSSOCONFIGURATIONREPAIRRESPONSE_H

#include "nimbleresponse.h"
#include "startstudiossoconfigurationrepairrequest.h"

namespace QtAws {
namespace Nimble {

class StartStudioSSOConfigurationRepairResponsePrivate;

class QTAWSNIMBLE_EXPORT StartStudioSSOConfigurationRepairResponse : public NimbleResponse {
    Q_OBJECT

public:
    StartStudioSSOConfigurationRepairResponse(const StartStudioSSOConfigurationRepairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartStudioSSOConfigurationRepairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStudioSSOConfigurationRepairResponse)
    Q_DISABLE_COPY(StartStudioSSOConfigurationRepairResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif

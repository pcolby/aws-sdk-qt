// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROACTIVEENGAGEMENTRESPONSE_H
#define QTAWS_DISABLEPROACTIVEENGAGEMENTRESPONSE_H

#include "shieldresponse.h"
#include "disableproactiveengagementrequest.h"

namespace QtAws {
namespace Shield {

class DisableProactiveEngagementResponsePrivate;

class QTAWSSHIELD_EXPORT DisableProactiveEngagementResponse : public ShieldResponse {
    Q_OBJECT

public:
    DisableProactiveEngagementResponse(const DisableProactiveEngagementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableProactiveEngagementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableProactiveEngagementResponse)
    Q_DISABLE_COPY(DisableProactiveEngagementResponse)

};

} // namespace Shield
} // namespace QtAws

#endif

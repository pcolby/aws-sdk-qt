// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROACTIVEENGAGEMENTRESPONSE_H
#define QTAWS_ENABLEPROACTIVEENGAGEMENTRESPONSE_H

#include "shieldresponse.h"
#include "enableproactiveengagementrequest.h"

namespace QtAws {
namespace Shield {

class EnableProactiveEngagementResponsePrivate;

class QTAWSSHIELD_EXPORT EnableProactiveEngagementResponse : public ShieldResponse {
    Q_OBJECT

public:
    EnableProactiveEngagementResponse(const EnableProactiveEngagementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableProactiveEngagementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableProactiveEngagementResponse)
    Q_DISABLE_COPY(EnableProactiveEngagementResponse)

};

} // namespace Shield
} // namespace QtAws

#endif

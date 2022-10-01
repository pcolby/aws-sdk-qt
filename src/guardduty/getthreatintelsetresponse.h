// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHREATINTELSETRESPONSE_H
#define QTAWS_GETTHREATINTELSETRESPONSE_H

#include "guarddutyresponse.h"
#include "getthreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetThreatIntelSetResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetThreatIntelSetResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetThreatIntelSetResponse(const GetThreatIntelSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThreatIntelSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThreatIntelSetResponse)
    Q_DISABLE_COPY(GetThreatIntelSetResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

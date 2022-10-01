// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHREATINTELSETRESPONSE_H
#define QTAWS_UPDATETHREATINTELSETRESPONSE_H

#include "guarddutyresponse.h"
#include "updatethreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateThreatIntelSetResponsePrivate;

class QTAWSGUARDDUTY_EXPORT UpdateThreatIntelSetResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    UpdateThreatIntelSetResponse(const UpdateThreatIntelSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThreatIntelSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThreatIntelSetResponse)
    Q_DISABLE_COPY(UpdateThreatIntelSetResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

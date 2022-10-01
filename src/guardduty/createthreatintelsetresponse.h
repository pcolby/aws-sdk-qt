// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHREATINTELSETRESPONSE_H
#define QTAWS_CREATETHREATINTELSETRESPONSE_H

#include "guarddutyresponse.h"
#include "createthreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateThreatIntelSetResponsePrivate;

class QTAWSGUARDDUTY_EXPORT CreateThreatIntelSetResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreateThreatIntelSetResponse(const CreateThreatIntelSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateThreatIntelSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThreatIntelSetResponse)
    Q_DISABLE_COPY(CreateThreatIntelSetResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

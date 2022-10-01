// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHREATINTELSETRESPONSE_H
#define QTAWS_DELETETHREATINTELSETRESPONSE_H

#include "guarddutyresponse.h"
#include "deletethreatintelsetrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteThreatIntelSetResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DeleteThreatIntelSetResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DeleteThreatIntelSetResponse(const DeleteThreatIntelSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThreatIntelSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThreatIntelSetResponse)
    Q_DISABLE_COPY(DeleteThreatIntelSetResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ARCHIVEFINDINGSRESPONSE_H
#define QTAWS_ARCHIVEFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "archivefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ArchiveFindingsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ArchiveFindingsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ArchiveFindingsResponse(const ArchiveFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ArchiveFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ArchiveFindingsResponse)
    Q_DISABLE_COPY(ArchiveFindingsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

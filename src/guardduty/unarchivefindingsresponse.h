// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNARCHIVEFINDINGSRESPONSE_H
#define QTAWS_UNARCHIVEFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "unarchivefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class UnarchiveFindingsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT UnarchiveFindingsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    UnarchiveFindingsResponse(const UnarchiveFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnarchiveFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnarchiveFindingsResponse)
    Q_DISABLE_COPY(UnarchiveFindingsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

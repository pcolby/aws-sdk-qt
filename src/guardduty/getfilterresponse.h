// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILTERRESPONSE_H
#define QTAWS_GETFILTERRESPONSE_H

#include "guarddutyresponse.h"
#include "getfilterrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFilterResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetFilterResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetFilterResponse(const GetFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFilterResponse)
    Q_DISABLE_COPY(GetFilterResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

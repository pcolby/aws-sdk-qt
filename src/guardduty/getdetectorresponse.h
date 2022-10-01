// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORRESPONSE_H
#define QTAWS_GETDETECTORRESPONSE_H

#include "guarddutyresponse.h"
#include "getdetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetDetectorResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetDetectorResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetDetectorResponse(const GetDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorResponse)
    Q_DISABLE_COPY(GetDetectorResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

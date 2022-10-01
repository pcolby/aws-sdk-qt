// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORRESPONSE_H
#define QTAWS_UPDATEDETECTORRESPONSE_H

#include "guarddutyresponse.h"
#include "updatedetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateDetectorResponsePrivate;

class QTAWSGUARDDUTY_EXPORT UpdateDetectorResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    UpdateDetectorResponse(const UpdateDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorResponse)
    Q_DISABLE_COPY(UpdateDetectorResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

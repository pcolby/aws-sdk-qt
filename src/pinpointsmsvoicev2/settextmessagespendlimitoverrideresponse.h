// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDERESPONSE_H
#define QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "settextmessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetTextMessageSpendLimitOverrideResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetTextMessageSpendLimitOverrideResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    SetTextMessageSpendLimitOverrideResponse(const SetTextMessageSpendLimitOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTextMessageSpendLimitOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTextMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(SetTextMessageSpendLimitOverrideResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

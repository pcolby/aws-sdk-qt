// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_H
#define QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "setvoicemessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetVoiceMessageSpendLimitOverrideResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetVoiceMessageSpendLimitOverrideResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    SetVoiceMessageSpendLimitOverrideResponse(const SetVoiceMessageSpendLimitOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetVoiceMessageSpendLimitOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVoiceMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(SetVoiceMessageSpendLimitOverrideResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

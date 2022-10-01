// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_H
#define QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deletevoicemessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteVoiceMessageSpendLimitOverrideResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteVoiceMessageSpendLimitOverrideResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteVoiceMessageSpendLimitOverrideResponse(const DeleteVoiceMessageSpendLimitOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceMessageSpendLimitOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(DeleteVoiceMessageSpendLimitOverrideResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

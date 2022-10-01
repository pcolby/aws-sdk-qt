// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDERESPONSE_H
#define QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deletetextmessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteTextMessageSpendLimitOverrideResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteTextMessageSpendLimitOverrideResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteTextMessageSpendLimitOverrideResponse(const DeleteTextMessageSpendLimitOverrideRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTextMessageSpendLimitOverrideRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTextMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(DeleteTextMessageSpendLimitOverrideResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

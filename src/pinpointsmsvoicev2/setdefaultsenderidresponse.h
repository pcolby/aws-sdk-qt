// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTSENDERIDRESPONSE_H
#define QTAWS_SETDEFAULTSENDERIDRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "setdefaultsenderidrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultSenderIdResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetDefaultSenderIdResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    SetDefaultSenderIdResponse(const SetDefaultSenderIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDefaultSenderIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultSenderIdResponse)
    Q_DISABLE_COPY(SetDefaultSenderIdResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

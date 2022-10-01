// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOOLRESPONSE_H
#define QTAWS_CREATEPOOLRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "createpoolrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreatePoolResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT CreatePoolResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    CreatePoolResponse(const CreatePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePoolResponse)
    Q_DISABLE_COPY(CreatePoolResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

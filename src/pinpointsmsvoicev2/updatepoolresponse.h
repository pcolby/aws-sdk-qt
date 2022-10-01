// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOOLRESPONSE_H
#define QTAWS_UPDATEPOOLRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "updatepoolrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdatePoolResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT UpdatePoolResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    UpdatePoolResponse(const UpdatePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePoolResponse)
    Q_DISABLE_COPY(UpdatePoolResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

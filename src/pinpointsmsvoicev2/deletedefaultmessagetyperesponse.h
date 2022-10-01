// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTMESSAGETYPERESPONSE_H
#define QTAWS_DELETEDEFAULTMESSAGETYPERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deletedefaultmessagetyperequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultMessageTypeResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteDefaultMessageTypeResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteDefaultMessageTypeResponse(const DeleteDefaultMessageTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDefaultMessageTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDefaultMessageTypeResponse)
    Q_DISABLE_COPY(DeleteDefaultMessageTypeResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

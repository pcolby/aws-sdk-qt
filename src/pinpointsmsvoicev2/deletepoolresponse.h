// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOOLRESPONSE_H
#define QTAWS_DELETEPOOLRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deletepoolrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeletePoolResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeletePoolResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeletePoolResponse(const DeletePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePoolResponse)
    Q_DISABLE_COPY(DeletePoolResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

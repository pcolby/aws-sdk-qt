// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTSENDERIDRESPONSE_H
#define QTAWS_DELETEDEFAULTSENDERIDRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deletedefaultsenderidrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultSenderIdResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteDefaultSenderIdResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteDefaultSenderIdResponse(const DeleteDefaultSenderIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDefaultSenderIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDefaultSenderIdResponse)
    Q_DISABLE_COPY(DeleteDefaultSenderIdResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYWORDRESPONSE_H
#define QTAWS_DELETEKEYWORDRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deletekeywordrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteKeywordResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteKeywordResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteKeywordResponse(const DeleteKeywordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKeywordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeywordResponse)
    Q_DISABLE_COPY(DeleteKeywordResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

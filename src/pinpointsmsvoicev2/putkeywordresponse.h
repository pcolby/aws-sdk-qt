// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYWORDRESPONSE_H
#define QTAWS_PUTKEYWORDRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "putkeywordrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutKeywordResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PutKeywordResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    PutKeywordResponse(const PutKeywordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutKeywordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutKeywordResponse)
    Q_DISABLE_COPY(PutKeywordResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif

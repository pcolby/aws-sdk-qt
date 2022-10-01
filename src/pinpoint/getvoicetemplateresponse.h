// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICETEMPLATERESPONSE_H
#define QTAWS_GETVOICETEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "getvoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT GetVoiceTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetVoiceTemplateResponse(const GetVoiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceTemplateResponse)
    Q_DISABLE_COPY(GetVoiceTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

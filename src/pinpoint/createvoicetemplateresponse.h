// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICETEMPLATERESPONSE_H
#define QTAWS_CREATEVOICETEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "createvoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateVoiceTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateVoiceTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateVoiceTemplateResponse(const CreateVoiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVoiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVoiceTemplateResponse)
    Q_DISABLE_COPY(CreateVoiceTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

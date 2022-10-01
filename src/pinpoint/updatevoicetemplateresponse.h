// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICETEMPLATERESPONSE_H
#define QTAWS_UPDATEVOICETEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "updatevoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateVoiceTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateVoiceTemplateResponse(const UpdateVoiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVoiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceTemplateResponse)
    Q_DISABLE_COPY(UpdateVoiceTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

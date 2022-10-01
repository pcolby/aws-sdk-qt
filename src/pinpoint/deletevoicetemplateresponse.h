// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICETEMPLATERESPONSE_H
#define QTAWS_DELETEVOICETEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "deletevoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteVoiceTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteVoiceTemplateResponse(const DeleteVoiceTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceTemplateResponse)
    Q_DISABLE_COPY(DeleteVoiceTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

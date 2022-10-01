// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUSHTEMPLATERESPONSE_H
#define QTAWS_CREATEPUSHTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "createpushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreatePushTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT CreatePushTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreatePushTemplateResponse(const CreatePushTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePushTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePushTemplateResponse)
    Q_DISABLE_COPY(CreatePushTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

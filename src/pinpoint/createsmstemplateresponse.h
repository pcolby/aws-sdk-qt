// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSTEMPLATERESPONSE_H
#define QTAWS_CREATESMSTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "createsmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateSmsTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateSmsTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateSmsTemplateResponse(const CreateSmsTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSmsTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSmsTemplateResponse)
    Q_DISABLE_COPY(CreateSmsTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

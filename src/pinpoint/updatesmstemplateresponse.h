// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSTEMPLATERESPONSE_H
#define QTAWS_UPDATESMSTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "updatesmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateSmsTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateSmsTemplateResponse(const UpdateSmsTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSmsTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSmsTemplateResponse)
    Q_DISABLE_COPY(UpdateSmsTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

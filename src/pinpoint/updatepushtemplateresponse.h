// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUSHTEMPLATERESPONSE_H
#define QTAWS_UPDATEPUSHTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "updatepushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdatePushTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdatePushTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdatePushTemplateResponse(const UpdatePushTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePushTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePushTemplateResponse)
    Q_DISABLE_COPY(UpdatePushTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

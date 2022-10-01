// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUSHTEMPLATERESPONSE_H
#define QTAWS_GETPUSHTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "getpushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetPushTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT GetPushTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetPushTemplateResponse(const GetPushTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPushTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPushTemplateResponse)
    Q_DISABLE_COPY(GetPushTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

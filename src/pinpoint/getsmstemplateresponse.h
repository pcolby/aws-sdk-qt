// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSTEMPLATERESPONSE_H
#define QTAWS_GETSMSTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "getsmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSmsTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSmsTemplateResponse(const GetSmsTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSmsTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSmsTemplateResponse)
    Q_DISABLE_COPY(GetSmsTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

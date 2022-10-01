// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILTEMPLATERESPONSE_H
#define QTAWS_GETEMAILTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "getemailtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT GetEmailTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetEmailTemplateResponse(const GetEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailTemplateResponse)
    Q_DISABLE_COPY(GetEmailTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

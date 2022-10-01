// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPTEMPLATERESPONSE_H
#define QTAWS_GETINAPPTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "getinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT GetInAppTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetInAppTemplateResponse(const GetInAppTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInAppTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInAppTemplateResponse)
    Q_DISABLE_COPY(GetInAppTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

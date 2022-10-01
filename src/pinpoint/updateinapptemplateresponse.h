// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINAPPTEMPLATERESPONSE_H
#define QTAWS_UPDATEINAPPTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "updateinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateInAppTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateInAppTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateInAppTemplateResponse(const UpdateInAppTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInAppTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInAppTemplateResponse)
    Q_DISABLE_COPY(UpdateInAppTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSTEMPLATERESPONSE_H
#define QTAWS_DELETESMSTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "deletesmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteSmsTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteSmsTemplateResponse(const DeleteSmsTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSmsTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSmsTemplateResponse)
    Q_DISABLE_COPY(DeleteSmsTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

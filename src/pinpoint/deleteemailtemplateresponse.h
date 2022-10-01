// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATERESPONSE_H
#define QTAWS_DELETEEMAILTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "deleteemailtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteEmailTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteEmailTemplateResponse(const DeleteEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailTemplateResponse)
    Q_DISABLE_COPY(DeleteEmailTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

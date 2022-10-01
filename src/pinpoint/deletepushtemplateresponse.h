// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUSHTEMPLATERESPONSE_H
#define QTAWS_DELETEPUSHTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "deletepushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeletePushTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT DeletePushTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeletePushTemplateResponse(const DeletePushTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePushTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePushTemplateResponse)
    Q_DISABLE_COPY(DeletePushTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

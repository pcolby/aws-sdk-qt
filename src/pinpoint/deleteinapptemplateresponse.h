// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINAPPTEMPLATERESPONSE_H
#define QTAWS_DELETEINAPPTEMPLATERESPONSE_H

#include "pinpointresponse.h"
#include "deleteinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteInAppTemplateResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteInAppTemplateResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteInAppTemplateResponse(const DeleteInAppTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInAppTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInAppTemplateResponse)
    Q_DISABLE_COPY(DeleteInAppTemplateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

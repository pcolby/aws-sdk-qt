// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEACTIVEVERSIONRESPONSE_H
#define QTAWS_UPDATETEMPLATEACTIVEVERSIONRESPONSE_H

#include "pinpointresponse.h"
#include "updatetemplateactiveversionrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateTemplateActiveVersionResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateTemplateActiveVersionResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateTemplateActiveVersionResponse(const UpdateTemplateActiveVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTemplateActiveVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateActiveVersionResponse)
    Q_DISABLE_COPY(UpdateTemplateActiveVersionResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

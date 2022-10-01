// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPRESPONSE_H
#define QTAWS_CREATEAPPRESPONSE_H

#include "pinpointresponse.h"
#include "createapprequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateAppResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateAppResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateAppResponse(const CreateAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppResponse)
    Q_DISABLE_COPY(CreateAppResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

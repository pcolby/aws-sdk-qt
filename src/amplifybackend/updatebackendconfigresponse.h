// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDCONFIGRESPONSE_H
#define QTAWS_UPDATEBACKENDCONFIGRESPONSE_H

#include "amplifybackendresponse.h"
#include "updatebackendconfigrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendConfigResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendConfigResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    UpdateBackendConfigResponse(const UpdateBackendConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBackendConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendConfigResponse)
    Q_DISABLE_COPY(UpdateBackendConfigResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

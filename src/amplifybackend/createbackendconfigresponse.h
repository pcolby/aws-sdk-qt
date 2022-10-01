// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDCONFIGRESPONSE_H
#define QTAWS_CREATEBACKENDCONFIGRESPONSE_H

#include "amplifybackendresponse.h"
#include "createbackendconfigrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendConfigResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendConfigResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CreateBackendConfigResponse(const CreateBackendConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackendConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendConfigResponse)
    Q_DISABLE_COPY(CreateBackendConfigResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

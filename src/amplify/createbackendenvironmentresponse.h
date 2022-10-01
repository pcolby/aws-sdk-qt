// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDENVIRONMENTRESPONSE_H
#define QTAWS_CREATEBACKENDENVIRONMENTRESPONSE_H

#include "amplifyresponse.h"
#include "createbackendenvironmentrequest.h"

namespace QtAws {
namespace Amplify {

class CreateBackendEnvironmentResponsePrivate;

class QTAWSAMPLIFY_EXPORT CreateBackendEnvironmentResponse : public AmplifyResponse {
    Q_OBJECT

public:
    CreateBackendEnvironmentResponse(const CreateBackendEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackendEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendEnvironmentResponse)
    Q_DISABLE_COPY(CreateBackendEnvironmentResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDENVIRONMENTRESPONSE_H
#define QTAWS_GETBACKENDENVIRONMENTRESPONSE_H

#include "amplifyresponse.h"
#include "getbackendenvironmentrequest.h"

namespace QtAws {
namespace Amplify {

class GetBackendEnvironmentResponsePrivate;

class QTAWSAMPLIFY_EXPORT GetBackendEnvironmentResponse : public AmplifyResponse {
    Q_OBJECT

public:
    GetBackendEnvironmentResponse(const GetBackendEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackendEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendEnvironmentResponse)
    Q_DISABLE_COPY(GetBackendEnvironmentResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif

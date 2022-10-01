// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDENVIRONMENTRESPONSE_H
#define QTAWS_DELETEBACKENDENVIRONMENTRESPONSE_H

#include "amplifyresponse.h"
#include "deletebackendenvironmentrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteBackendEnvironmentResponsePrivate;

class QTAWSAMPLIFY_EXPORT DeleteBackendEnvironmentResponse : public AmplifyResponse {
    Q_OBJECT

public:
    DeleteBackendEnvironmentResponse(const DeleteBackendEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackendEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendEnvironmentResponse)
    Q_DISABLE_COPY(DeleteBackendEnvironmentResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEBACKENDCONFIGRESPONSE_H
#define QTAWS_REMOVEBACKENDCONFIGRESPONSE_H

#include "amplifybackendresponse.h"
#include "removebackendconfigrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveBackendConfigResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT RemoveBackendConfigResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    RemoveBackendConfigResponse(const RemoveBackendConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveBackendConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveBackendConfigResponse)
    Q_DISABLE_COPY(RemoveBackendConfigResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

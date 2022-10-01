// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDRESPONSE_H
#define QTAWS_CREATEBACKENDRESPONSE_H

#include "amplifybackendresponse.h"
#include "createbackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CreateBackendResponse(const CreateBackendRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackendRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendResponse)
    Q_DISABLE_COPY(CreateBackendResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

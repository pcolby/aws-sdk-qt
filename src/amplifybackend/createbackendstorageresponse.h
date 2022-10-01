// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDSTORAGERESPONSE_H
#define QTAWS_CREATEBACKENDSTORAGERESPONSE_H

#include "amplifybackendresponse.h"
#include "createbackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendStorageResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendStorageResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CreateBackendStorageResponse(const CreateBackendStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackendStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendStorageResponse)
    Q_DISABLE_COPY(CreateBackendStorageResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

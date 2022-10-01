// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDSTORAGERESPONSE_H
#define QTAWS_DELETEBACKENDSTORAGERESPONSE_H

#include "amplifybackendresponse.h"
#include "deletebackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendStorageResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendStorageResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    DeleteBackendStorageResponse(const DeleteBackendStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackendStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendStorageResponse)
    Q_DISABLE_COPY(DeleteBackendStorageResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

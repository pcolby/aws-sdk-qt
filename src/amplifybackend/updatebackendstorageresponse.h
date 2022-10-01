// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDSTORAGERESPONSE_H
#define QTAWS_UPDATEBACKENDSTORAGERESPONSE_H

#include "amplifybackendresponse.h"
#include "updatebackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendStorageResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendStorageResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    UpdateBackendStorageResponse(const UpdateBackendStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBackendStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendStorageResponse)
    Q_DISABLE_COPY(UpdateBackendStorageResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDSTORAGERESPONSE_H
#define QTAWS_GETBACKENDSTORAGERESPONSE_H

#include "amplifybackendresponse.h"
#include "getbackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendStorageResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendStorageResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GetBackendStorageResponse(const GetBackendStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackendStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendStorageResponse)
    Q_DISABLE_COPY(GetBackendStorageResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

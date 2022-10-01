// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDSTORAGERESPONSE_H
#define QTAWS_IMPORTBACKENDSTORAGERESPONSE_H

#include "amplifybackendresponse.h"
#include "importbackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendStorageResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ImportBackendStorageResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    ImportBackendStorageResponse(const ImportBackendStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportBackendStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportBackendStorageResponse)
    Q_DISABLE_COPY(ImportBackendStorageResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

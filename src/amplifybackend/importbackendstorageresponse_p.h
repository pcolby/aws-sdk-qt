// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDSTORAGERESPONSE_P_H
#define QTAWS_IMPORTBACKENDSTORAGERESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendStorageResponse;

class ImportBackendStorageResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit ImportBackendStorageResponsePrivate(ImportBackendStorageResponse * const q);

    void parseImportBackendStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportBackendStorageResponse)
    Q_DISABLE_COPY(ImportBackendStorageResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

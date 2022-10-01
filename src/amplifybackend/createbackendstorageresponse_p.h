// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDSTORAGERESPONSE_P_H
#define QTAWS_CREATEBACKENDSTORAGERESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendStorageResponse;

class CreateBackendStorageResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit CreateBackendStorageResponsePrivate(CreateBackendStorageResponse * const q);

    void parseCreateBackendStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackendStorageResponse)
    Q_DISABLE_COPY(CreateBackendStorageResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

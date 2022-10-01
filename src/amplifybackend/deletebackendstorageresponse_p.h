// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDSTORAGERESPONSE_P_H
#define QTAWS_DELETEBACKENDSTORAGERESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendStorageResponse;

class DeleteBackendStorageResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit DeleteBackendStorageResponsePrivate(DeleteBackendStorageResponse * const q);

    void parseDeleteBackendStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackendStorageResponse)
    Q_DISABLE_COPY(DeleteBackendStorageResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

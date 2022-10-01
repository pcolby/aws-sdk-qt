// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDSTORAGERESPONSE_P_H
#define QTAWS_GETBACKENDSTORAGERESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendStorageResponse;

class GetBackendStorageResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetBackendStorageResponsePrivate(GetBackendStorageResponse * const q);

    void parseGetBackendStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendStorageResponse)
    Q_DISABLE_COPY(GetBackendStorageResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

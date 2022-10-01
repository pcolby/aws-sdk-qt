// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDSTORAGERESPONSE_P_H
#define QTAWS_UPDATEBACKENDSTORAGERESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendStorageResponse;

class UpdateBackendStorageResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit UpdateBackendStorageResponsePrivate(UpdateBackendStorageResponse * const q);

    void parseUpdateBackendStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBackendStorageResponse)
    Q_DISABLE_COPY(UpdateBackendStorageResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

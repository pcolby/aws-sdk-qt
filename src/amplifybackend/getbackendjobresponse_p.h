// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDJOBRESPONSE_P_H
#define QTAWS_GETBACKENDJOBRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendJobResponse;

class GetBackendJobResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetBackendJobResponsePrivate(GetBackendJobResponse * const q);

    void parseGetBackendJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendJobResponse)
    Q_DISABLE_COPY(GetBackendJobResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

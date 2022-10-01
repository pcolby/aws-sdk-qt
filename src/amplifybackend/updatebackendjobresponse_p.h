// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDJOBRESPONSE_P_H
#define QTAWS_UPDATEBACKENDJOBRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendJobResponse;

class UpdateBackendJobResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit UpdateBackendJobResponsePrivate(UpdateBackendJobResponse * const q);

    void parseUpdateBackendJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBackendJobResponse)
    Q_DISABLE_COPY(UpdateBackendJobResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

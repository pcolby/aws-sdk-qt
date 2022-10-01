// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAPIRESPONSE_P_H
#define QTAWS_UPDATEBACKENDAPIRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAPIResponse;

class UpdateBackendAPIResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit UpdateBackendAPIResponsePrivate(UpdateBackendAPIResponse * const q);

    void parseUpdateBackendAPIResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBackendAPIResponse)
    Q_DISABLE_COPY(UpdateBackendAPIResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

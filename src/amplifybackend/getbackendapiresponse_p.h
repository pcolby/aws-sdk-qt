// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIRESPONSE_P_H
#define QTAWS_GETBACKENDAPIRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIResponse;

class GetBackendAPIResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetBackendAPIResponsePrivate(GetBackendAPIResponse * const q);

    void parseGetBackendAPIResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendAPIResponse)
    Q_DISABLE_COPY(GetBackendAPIResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

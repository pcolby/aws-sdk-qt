// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAPIRESPONSE_P_H
#define QTAWS_CREATEBACKENDAPIRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAPIResponse;

class CreateBackendAPIResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit CreateBackendAPIResponsePrivate(CreateBackendAPIResponse * const q);

    void parseCreateBackendAPIResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackendAPIResponse)
    Q_DISABLE_COPY(CreateBackendAPIResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

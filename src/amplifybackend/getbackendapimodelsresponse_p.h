// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIMODELSRESPONSE_P_H
#define QTAWS_GETBACKENDAPIMODELSRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIModelsResponse;

class GetBackendAPIModelsResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetBackendAPIModelsResponsePrivate(GetBackendAPIModelsResponse * const q);

    void parseGetBackendAPIModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendAPIModelsResponse)
    Q_DISABLE_COPY(GetBackendAPIModelsResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

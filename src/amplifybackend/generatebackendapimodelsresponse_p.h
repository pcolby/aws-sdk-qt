// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEBACKENDAPIMODELSRESPONSE_P_H
#define QTAWS_GENERATEBACKENDAPIMODELSRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GenerateBackendAPIModelsResponse;

class GenerateBackendAPIModelsResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GenerateBackendAPIModelsResponsePrivate(GenerateBackendAPIModelsResponse * const q);

    void parseGenerateBackendAPIModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateBackendAPIModelsResponse)
    Q_DISABLE_COPY(GenerateBackendAPIModelsResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

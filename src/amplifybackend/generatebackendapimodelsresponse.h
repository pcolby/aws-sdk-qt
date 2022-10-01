// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEBACKENDAPIMODELSRESPONSE_H
#define QTAWS_GENERATEBACKENDAPIMODELSRESPONSE_H

#include "amplifybackendresponse.h"
#include "generatebackendapimodelsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GenerateBackendAPIModelsResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GenerateBackendAPIModelsResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GenerateBackendAPIModelsResponse(const GenerateBackendAPIModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateBackendAPIModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateBackendAPIModelsResponse)
    Q_DISABLE_COPY(GenerateBackendAPIModelsResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

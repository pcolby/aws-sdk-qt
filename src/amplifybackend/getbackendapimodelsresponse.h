// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIMODELSRESPONSE_H
#define QTAWS_GETBACKENDAPIMODELSRESPONSE_H

#include "amplifybackendresponse.h"
#include "getbackendapimodelsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIModelsResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendAPIModelsResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GetBackendAPIModelsResponse(const GetBackendAPIModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackendAPIModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendAPIModelsResponse)
    Q_DISABLE_COPY(GetBackendAPIModelsResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAPIRESPONSE_H
#define QTAWS_CREATEBACKENDAPIRESPONSE_H

#include "amplifybackendresponse.h"
#include "createbackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAPIResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendAPIResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CreateBackendAPIResponse(const CreateBackendAPIRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackendAPIRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendAPIResponse)
    Q_DISABLE_COPY(CreateBackendAPIResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

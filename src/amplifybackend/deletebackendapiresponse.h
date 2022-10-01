// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAPIRESPONSE_H
#define QTAWS_DELETEBACKENDAPIRESPONSE_H

#include "amplifybackendresponse.h"
#include "deletebackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAPIResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendAPIResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    DeleteBackendAPIResponse(const DeleteBackendAPIRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackendAPIRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendAPIResponse)
    Q_DISABLE_COPY(DeleteBackendAPIResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAPIRESPONSE_H
#define QTAWS_UPDATEBACKENDAPIRESPONSE_H

#include "amplifybackendresponse.h"
#include "updatebackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAPIResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendAPIResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    UpdateBackendAPIResponse(const UpdateBackendAPIRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBackendAPIRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendAPIResponse)
    Q_DISABLE_COPY(UpdateBackendAPIResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif

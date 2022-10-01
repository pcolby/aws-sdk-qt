// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINTEGRATIONRESPONSE_H
#define QTAWS_UPDATESERVICEINTEGRATIONRESPONSE_H

#include "devopsgururesponse.h"
#include "updateserviceintegrationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateServiceIntegrationResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateServiceIntegrationResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    UpdateServiceIntegrationResponse(const UpdateServiceIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceIntegrationResponse)
    Q_DISABLE_COPY(UpdateServiceIntegrationResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

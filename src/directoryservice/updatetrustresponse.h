// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTRESPONSE_H
#define QTAWS_UPDATETRUSTRESPONSE_H

#include "directoryserviceresponse.h"
#include "updatetrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateTrustResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateTrustResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    UpdateTrustResponse(const UpdateTrustRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrustRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrustResponse)
    Q_DISABLE_COPY(UpdateTrustResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

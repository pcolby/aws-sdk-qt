// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTRESPONSE_H
#define QTAWS_CREATETRUSTRESPONSE_H

#include "directoryserviceresponse.h"
#include "createtrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateTrustResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateTrustResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    CreateTrustResponse(const CreateTrustRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrustRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrustResponse)
    Q_DISABLE_COPY(CreateTrustResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

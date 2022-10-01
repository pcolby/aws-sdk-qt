// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYTRUSTRESPONSE_H
#define QTAWS_VERIFYTRUSTRESPONSE_H

#include "directoryserviceresponse.h"
#include "verifytrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class VerifyTrustResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT VerifyTrustResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    VerifyTrustResponse(const VerifyTrustRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyTrustRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyTrustResponse)
    Q_DISABLE_COPY(VerifyTrustResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

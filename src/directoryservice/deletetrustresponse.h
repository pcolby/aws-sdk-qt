// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTRESPONSE_H
#define QTAWS_DELETETRUSTRESPONSE_H

#include "directoryserviceresponse.h"
#include "deletetrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteTrustResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeleteTrustResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DeleteTrustResponse(const DeleteTrustRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrustRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrustResponse)
    Q_DISABLE_COPY(DeleteTrustResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

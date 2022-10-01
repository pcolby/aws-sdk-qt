// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETUSERPASSWORDRESPONSE_H
#define QTAWS_RESETUSERPASSWORDRESPONSE_H

#include "directoryserviceresponse.h"
#include "resetuserpasswordrequest.h"

namespace QtAws {
namespace DirectoryService {

class ResetUserPasswordResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ResetUserPasswordResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    ResetUserPasswordResponse(const ResetUserPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetUserPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetUserPasswordResponse)
    Q_DISABLE_COPY(ResetUserPasswordResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

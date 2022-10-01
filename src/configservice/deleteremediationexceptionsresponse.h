// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONEXCEPTIONSRESPONSE_H
#define QTAWS_DELETEREMEDIATIONEXCEPTIONSRESPONSE_H

#include "configserviceresponse.h"
#include "deleteremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationExceptionsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteRemediationExceptionsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteRemediationExceptionsResponse(const DeleteRemediationExceptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRemediationExceptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRemediationExceptionsResponse)
    Q_DISABLE_COPY(DeleteRemediationExceptionsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATELOGSUBSCRIPTIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "createlogsubscriptionrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateLogSubscriptionResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateLogSubscriptionResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    CreateLogSubscriptionResponse(const CreateLogSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLogSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogSubscriptionResponse)
    Q_DISABLE_COPY(CreateLogSubscriptionResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

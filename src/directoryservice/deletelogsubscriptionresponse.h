// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETELOGSUBSCRIPTIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "deletelogsubscriptionrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteLogSubscriptionResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeleteLogSubscriptionResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DeleteLogSubscriptionResponse(const DeleteLogSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLogSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogSubscriptionResponse)
    Q_DISABLE_COPY(DeleteLogSubscriptionResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

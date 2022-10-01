// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETENOTIFICATIONSUBSCRIPTIONREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteNotificationSubscriptionRequestPrivate;

class QTAWSWORKDOCS_EXPORT DeleteNotificationSubscriptionRequest : public WorkDocsRequest {

public:
    DeleteNotificationSubscriptionRequest(const DeleteNotificationSubscriptionRequest &other);
    DeleteNotificationSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationSubscriptionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

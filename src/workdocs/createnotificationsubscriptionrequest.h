// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATENOTIFICATIONSUBSCRIPTIONREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateNotificationSubscriptionRequestPrivate;

class QTAWSWORKDOCS_EXPORT CreateNotificationSubscriptionRequest : public WorkDocsRequest {

public:
    CreateNotificationSubscriptionRequest(const CreateNotificationSubscriptionRequest &other);
    CreateNotificationSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotificationSubscriptionRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

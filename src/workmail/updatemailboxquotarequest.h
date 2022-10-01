// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAILBOXQUOTAREQUEST_H
#define QTAWS_UPDATEMAILBOXQUOTAREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateMailboxQuotaRequestPrivate;

class QTAWSWORKMAIL_EXPORT UpdateMailboxQuotaRequest : public WorkMailRequest {

public:
    UpdateMailboxQuotaRequest(const UpdateMailboxQuotaRequest &other);
    UpdateMailboxQuotaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMailboxQuotaRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

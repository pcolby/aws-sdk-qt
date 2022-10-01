// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILBOXDETAILSREQUEST_H
#define QTAWS_GETMAILBOXDETAILSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMailboxDetailsRequestPrivate;

class QTAWSWORKMAIL_EXPORT GetMailboxDetailsRequest : public WorkMailRequest {

public:
    GetMailboxDetailsRequest(const GetMailboxDetailsRequest &other);
    GetMailboxDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMailboxDetailsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

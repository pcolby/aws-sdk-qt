// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXPERMISSIONSREQUEST_H
#define QTAWS_LISTMAILBOXPERMISSIONSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxPermissionsRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListMailboxPermissionsRequest : public WorkMailRequest {

public:
    ListMailboxPermissionsRequest(const ListMailboxPermissionsRequest &other);
    ListMailboxPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMailboxPermissionsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

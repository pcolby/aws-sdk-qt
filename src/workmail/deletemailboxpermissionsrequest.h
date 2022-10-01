// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAILBOXPERMISSIONSREQUEST_H
#define QTAWS_DELETEMAILBOXPERMISSIONSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMailboxPermissionsRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteMailboxPermissionsRequest : public WorkMailRequest {

public:
    DeleteMailboxPermissionsRequest(const DeleteMailboxPermissionsRequest &other);
    DeleteMailboxPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMailboxPermissionsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

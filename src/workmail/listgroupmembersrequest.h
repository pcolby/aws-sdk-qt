// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSREQUEST_H
#define QTAWS_LISTGROUPMEMBERSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListGroupMembersRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListGroupMembersRequest : public WorkMailRequest {

public:
    ListGroupMembersRequest(const ListGroupMembersRequest &other);
    ListGroupMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembersRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_H
#define QTAWS_LISTGROUPSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListGroupsRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListGroupsRequest : public WorkMailRequest {

public:
    ListGroupsRequest(const ListGroupsRequest &other);
    ListGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

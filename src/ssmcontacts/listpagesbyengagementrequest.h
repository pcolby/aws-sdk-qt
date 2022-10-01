// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYENGAGEMENTREQUEST_H
#define QTAWS_LISTPAGESBYENGAGEMENTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByEngagementRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT ListPagesByEngagementRequest : public SsmContactsRequest {

public:
    ListPagesByEngagementRequest(const ListPagesByEngagementRequest &other);
    ListPagesByEngagementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPagesByEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

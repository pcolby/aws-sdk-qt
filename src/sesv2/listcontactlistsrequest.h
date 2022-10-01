// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTLISTSREQUEST_H
#define QTAWS_LISTCONTACTLISTSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListContactListsRequestPrivate;

class QTAWSSESV2_EXPORT ListContactListsRequest : public SESv2Request {

public:
    ListContactListsRequest(const ListContactListsRequest &other);
    ListContactListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactListsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

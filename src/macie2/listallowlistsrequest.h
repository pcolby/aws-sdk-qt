// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWLISTSREQUEST_H
#define QTAWS_LISTALLOWLISTSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListAllowListsRequestPrivate;

class QTAWSMACIE2_EXPORT ListAllowListsRequest : public Macie2Request {

public:
    ListAllowListsRequest(const ListAllowListsRequest &other);
    ListAllowListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAllowListsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

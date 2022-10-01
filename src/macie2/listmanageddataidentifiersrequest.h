// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDDATAIDENTIFIERSREQUEST_H
#define QTAWS_LISTMANAGEDDATAIDENTIFIERSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListManagedDataIdentifiersRequestPrivate;

class QTAWSMACIE2_EXPORT ListManagedDataIdentifiersRequest : public Macie2Request {

public:
    ListManagedDataIdentifiersRequest(const ListManagedDataIdentifiersRequest &other);
    ListManagedDataIdentifiersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedDataIdentifiersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

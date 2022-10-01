// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEMETADATAREQUEST_P_H
#define QTAWS_LISTTABLEMETADATAREQUEST_P_H

#include "athenarequest_p.h"
#include "listtablemetadatarequest.h"

namespace QtAws {
namespace Athena {

class ListTableMetadataRequest;

class ListTableMetadataRequestPrivate : public AthenaRequestPrivate {

public:
    ListTableMetadataRequestPrivate(const AthenaRequest::Action action,
                                   ListTableMetadataRequest * const q);
    ListTableMetadataRequestPrivate(const ListTableMetadataRequestPrivate &other,
                                   ListTableMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTableMetadataRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

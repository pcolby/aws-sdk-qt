// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEMETADATAREQUEST_P_H
#define QTAWS_GETTABLEMETADATAREQUEST_P_H

#include "athenarequest_p.h"
#include "gettablemetadatarequest.h"

namespace QtAws {
namespace Athena {

class GetTableMetadataRequest;

class GetTableMetadataRequestPrivate : public AthenaRequestPrivate {

public:
    GetTableMetadataRequestPrivate(const AthenaRequest::Action action,
                                   GetTableMetadataRequest * const q);
    GetTableMetadataRequestPrivate(const GetTableMetadataRequestPrivate &other,
                                   GetTableMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTableMetadataRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

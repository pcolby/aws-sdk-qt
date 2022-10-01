// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAASJSONREQUEST_P_H
#define QTAWS_GETSCHEMAASJSONREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getschemaasjsonrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetSchemaAsJsonRequest;

class GetSchemaAsJsonRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetSchemaAsJsonRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetSchemaAsJsonRequest * const q);
    GetSchemaAsJsonRequestPrivate(const GetSchemaAsJsonRequestPrivate &other,
                                   GetSchemaAsJsonRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSchemaAsJsonRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

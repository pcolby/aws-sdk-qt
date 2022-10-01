// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLIEDSCHEMAVERSIONREQUEST_P_H
#define QTAWS_GETAPPLIEDSCHEMAVERSIONREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getappliedschemaversionrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetAppliedSchemaVersionRequest;

class GetAppliedSchemaVersionRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetAppliedSchemaVersionRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetAppliedSchemaVersionRequest * const q);
    GetAppliedSchemaVersionRequestPrivate(const GetAppliedSchemaVersionRequestPrivate &other,
                                   GetAppliedSchemaVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppliedSchemaVersionRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

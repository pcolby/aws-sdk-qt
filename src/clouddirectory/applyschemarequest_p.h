// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSCHEMAREQUEST_P_H
#define QTAWS_APPLYSCHEMAREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "applyschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class ApplySchemaRequest;

class ApplySchemaRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ApplySchemaRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ApplySchemaRequest * const q);
    ApplySchemaRequestPrivate(const ApplySchemaRequestPrivate &other,
                                   ApplySchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplySchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

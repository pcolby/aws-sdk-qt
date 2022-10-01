// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAFROMJSONREQUEST_P_H
#define QTAWS_PUTSCHEMAFROMJSONREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "putschemafromjsonrequest.h"

namespace QtAws {
namespace CloudDirectory {

class PutSchemaFromJsonRequest;

class PutSchemaFromJsonRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    PutSchemaFromJsonRequestPrivate(const CloudDirectoryRequest::Action action,
                                   PutSchemaFromJsonRequest * const q);
    PutSchemaFromJsonRequestPrivate(const PutSchemaFromJsonRequestPrivate &other,
                                   PutSchemaFromJsonRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSchemaFromJsonRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

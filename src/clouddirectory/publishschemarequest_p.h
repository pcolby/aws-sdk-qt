// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHSCHEMAREQUEST_P_H
#define QTAWS_PUBLISHSCHEMAREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "publishschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class PublishSchemaRequest;

class PublishSchemaRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    PublishSchemaRequestPrivate(const CloudDirectoryRequest::Action action,
                                   PublishSchemaRequest * const q);
    PublishSchemaRequestPrivate(const PublishSchemaRequestPrivate &other,
                                   PublishSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

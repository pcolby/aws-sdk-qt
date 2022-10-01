// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETADATAREQUEST_P_H
#define QTAWS_CREATECUSTOMMETADATAREQUEST_P_H

#include "workdocsrequest_p.h"
#include "createcustommetadatarequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateCustomMetadataRequest;

class CreateCustomMetadataRequestPrivate : public WorkDocsRequestPrivate {

public:
    CreateCustomMetadataRequestPrivate(const WorkDocsRequest::Action action,
                                   CreateCustomMetadataRequest * const q);
    CreateCustomMetadataRequestPrivate(const CreateCustomMetadataRequestPrivate &other,
                                   CreateCustomMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomMetadataRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

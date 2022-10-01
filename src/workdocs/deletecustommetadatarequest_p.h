// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETADATAREQUEST_P_H
#define QTAWS_DELETECUSTOMMETADATAREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletecustommetadatarequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCustomMetadataRequest;

class DeleteCustomMetadataRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteCustomMetadataRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteCustomMetadataRequest * const q);
    DeleteCustomMetadataRequestPrivate(const DeleteCustomMetadataRequestPrivate &other,
                                   DeleteCustomMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomMetadataRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

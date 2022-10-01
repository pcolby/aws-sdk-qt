// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERREQUEST_P_H
#define QTAWS_CREATEFOLDERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "createfolderrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateFolderRequest;

class CreateFolderRequestPrivate : public WorkDocsRequestPrivate {

public:
    CreateFolderRequestPrivate(const WorkDocsRequest::Action action,
                                   CreateFolderRequest * const q);
    CreateFolderRequestPrivate(const CreateFolderRequestPrivate &other,
                                   CreateFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

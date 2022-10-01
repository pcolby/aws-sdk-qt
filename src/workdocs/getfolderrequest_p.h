// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERREQUEST_P_H
#define QTAWS_GETFOLDERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getfolderrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderRequest;

class GetFolderRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetFolderRequestPrivate(const WorkDocsRequest::Action action,
                                   GetFolderRequest * const q);
    GetFolderRequestPrivate(const GetFolderRequestPrivate &other,
                                   GetFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

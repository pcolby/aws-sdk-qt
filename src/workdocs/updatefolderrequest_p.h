// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERREQUEST_P_H
#define QTAWS_UPDATEFOLDERREQUEST_P_H

#include "workdocsrequest_p.h"
#include "updatefolderrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateFolderRequest;

class UpdateFolderRequestPrivate : public WorkDocsRequestPrivate {

public:
    UpdateFolderRequestPrivate(const WorkDocsRequest::Action action,
                                   UpdateFolderRequest * const q);
    UpdateFolderRequestPrivate(const UpdateFolderRequestPrivate &other,
                                   UpdateFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFolderRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

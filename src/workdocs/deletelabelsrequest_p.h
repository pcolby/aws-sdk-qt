// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELSREQUEST_P_H
#define QTAWS_DELETELABELSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletelabelsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteLabelsRequest;

class DeleteLabelsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteLabelsRequestPrivate(const WorkDocsRequest::Action action,
                                   DeleteLabelsRequest * const q);
    DeleteLabelsRequestPrivate(const DeleteLabelsRequestPrivate &other,
                                   DeleteLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLabelsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASREQUEST_P_H
#define QTAWS_DELETEALIASREQUEST_P_H

#include "workmailrequest_p.h"
#include "deletealiasrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteAliasRequest;

class DeleteAliasRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteAliasRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteAliasRequest * const q);
    DeleteAliasRequestPrivate(const DeleteAliasRequestPrivate &other,
                                   DeleteAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAliasRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

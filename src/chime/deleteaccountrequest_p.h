// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTREQUEST_P_H
#define QTAWS_DELETEACCOUNTREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteaccountrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAccountRequest;

class DeleteAccountRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteAccountRequestPrivate(const ChimeRequest::Action action,
                                   DeleteAccountRequest * const q);
    DeleteAccountRequestPrivate(const DeleteAccountRequestPrivate &other,
                                   DeleteAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

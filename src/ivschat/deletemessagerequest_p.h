// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGEREQUEST_P_H
#define QTAWS_DELETEMESSAGEREQUEST_P_H

#include "ivschatrequest_p.h"
#include "deletemessagerequest.h"

namespace QtAws {
namespace IvsChat {

class DeleteMessageRequest;

class DeleteMessageRequestPrivate : public IvsChatRequestPrivate {

public:
    DeleteMessageRequestPrivate(const IvsChatRequest::Action action,
                                   DeleteMessageRequest * const q);
    DeleteMessageRequestPrivate(const DeleteMessageRequestPrivate &other,
                                   DeleteMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMessageRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif

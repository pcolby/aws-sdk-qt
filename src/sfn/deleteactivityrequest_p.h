// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVITYREQUEST_P_H
#define QTAWS_DELETEACTIVITYREQUEST_P_H

#include "sfnrequest_p.h"
#include "deleteactivityrequest.h"

namespace QtAws {
namespace Sfn {

class DeleteActivityRequest;

class DeleteActivityRequestPrivate : public SfnRequestPrivate {

public:
    DeleteActivityRequestPrivate(const SfnRequest::Action action,
                                   DeleteActivityRequest * const q);
    DeleteActivityRequestPrivate(const DeleteActivityRequestPrivate &other,
                                   DeleteActivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteActivityRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKASARCHIVEDREQUEST_P_H
#define QTAWS_MARKASARCHIVEDREQUEST_P_H

#include "mgnrequest_p.h"
#include "markasarchivedrequest.h"

namespace QtAws {
namespace Mgn {

class MarkAsArchivedRequest;

class MarkAsArchivedRequestPrivate : public MgnRequestPrivate {

public:
    MarkAsArchivedRequestPrivate(const MgnRequest::Action action,
                                   MarkAsArchivedRequest * const q);
    MarkAsArchivedRequestPrivate(const MarkAsArchivedRequestPrivate &other,
                                   MarkAsArchivedRequest * const q);

private:
    Q_DECLARE_PUBLIC(MarkAsArchivedRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

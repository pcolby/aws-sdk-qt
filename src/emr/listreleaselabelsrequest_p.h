// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELEASELABELSREQUEST_P_H
#define QTAWS_LISTRELEASELABELSREQUEST_P_H

#include "emrrequest_p.h"
#include "listreleaselabelsrequest.h"

namespace QtAws {
namespace Emr {

class ListReleaseLabelsRequest;

class ListReleaseLabelsRequestPrivate : public EmrRequestPrivate {

public:
    ListReleaseLabelsRequestPrivate(const EmrRequest::Action action,
                                   ListReleaseLabelsRequest * const q);
    ListReleaseLabelsRequestPrivate(const ListReleaseLabelsRequestPrivate &other,
                                   ListReleaseLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReleaseLabelsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

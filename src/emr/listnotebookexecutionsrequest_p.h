// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKEXECUTIONSREQUEST_P_H
#define QTAWS_LISTNOTEBOOKEXECUTIONSREQUEST_P_H

#include "emrrequest_p.h"
#include "listnotebookexecutionsrequest.h"

namespace QtAws {
namespace Emr {

class ListNotebookExecutionsRequest;

class ListNotebookExecutionsRequestPrivate : public EmrRequestPrivate {

public:
    ListNotebookExecutionsRequestPrivate(const EmrRequest::Action action,
                                   ListNotebookExecutionsRequest * const q);
    ListNotebookExecutionsRequestPrivate(const ListNotebookExecutionsRequestPrivate &other,
                                   ListNotebookExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotebookExecutionsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

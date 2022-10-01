// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUANTUMTASKSREQUEST_P_H
#define QTAWS_SEARCHQUANTUMTASKSREQUEST_P_H

#include "braketrequest_p.h"
#include "searchquantumtasksrequest.h"

namespace QtAws {
namespace Braket {

class SearchQuantumTasksRequest;

class SearchQuantumTasksRequestPrivate : public BraketRequestPrivate {

public:
    SearchQuantumTasksRequestPrivate(const BraketRequest::Action action,
                                   SearchQuantumTasksRequest * const q);
    SearchQuantumTasksRequestPrivate(const SearchQuantumTasksRequestPrivate &other,
                                   SearchQuantumTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchQuantumTasksRequest)

};

} // namespace Braket
} // namespace QtAws

#endif

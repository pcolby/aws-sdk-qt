// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSREQUEST_P_H
#define QTAWS_LISTEXPERIMENTSREQUEST_P_H

#include "fisrequest_p.h"
#include "listexperimentsrequest.h"

namespace QtAws {
namespace Fis {

class ListExperimentsRequest;

class ListExperimentsRequestPrivate : public FisRequestPrivate {

public:
    ListExperimentsRequestPrivate(const FisRequest::Action action,
                                   ListExperimentsRequest * const q);
    ListExperimentsRequestPrivate(const ListExperimentsRequestPrivate &other,
                                   ListExperimentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExperimentsRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

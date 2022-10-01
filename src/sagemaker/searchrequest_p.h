// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHREQUEST_P_H
#define QTAWS_SEARCHREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "searchrequest.h"

namespace QtAws {
namespace SageMaker {

class SearchRequest;

class SearchRequestPrivate : public SageMakerRequestPrivate {

public:
    SearchRequestPrivate(const SageMakerRequest::Action action,
                                   SearchRequest * const q);
    SearchRequestPrivate(const SearchRequestPrivate &other,
                                   SearchRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

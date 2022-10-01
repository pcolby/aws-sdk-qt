// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEARCHSUGGESTIONSREQUEST_P_H
#define QTAWS_GETSEARCHSUGGESTIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "getsearchsuggestionsrequest.h"

namespace QtAws {
namespace SageMaker {

class GetSearchSuggestionsRequest;

class GetSearchSuggestionsRequestPrivate : public SageMakerRequestPrivate {

public:
    GetSearchSuggestionsRequestPrivate(const SageMakerRequest::Action action,
                                   GetSearchSuggestionsRequest * const q);
    GetSearchSuggestionsRequestPrivate(const GetSearchSuggestionsRequestPrivate &other,
                                   GetSearchSuggestionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSearchSuggestionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

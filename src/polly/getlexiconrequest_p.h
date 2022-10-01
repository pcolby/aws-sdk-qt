// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLEXICONREQUEST_P_H
#define QTAWS_GETLEXICONREQUEST_P_H

#include "pollyrequest_p.h"
#include "getlexiconrequest.h"

namespace QtAws {
namespace Polly {

class GetLexiconRequest;

class GetLexiconRequestPrivate : public PollyRequestPrivate {

public:
    GetLexiconRequestPrivate(const PollyRequest::Action action,
                                   GetLexiconRequest * const q);
    GetLexiconRequestPrivate(const GetLexiconRequestPrivate &other,
                                   GetLexiconRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif

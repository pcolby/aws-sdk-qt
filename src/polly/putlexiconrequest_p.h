// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLEXICONREQUEST_P_H
#define QTAWS_PUTLEXICONREQUEST_P_H

#include "pollyrequest_p.h"
#include "putlexiconrequest.h"

namespace QtAws {
namespace Polly {

class PutLexiconRequest;

class PutLexiconRequestPrivate : public PollyRequestPrivate {

public:
    PutLexiconRequestPrivate(const PollyRequest::Action action,
                                   PutLexiconRequest * const q);
    PutLexiconRequestPrivate(const PutLexiconRequestPrivate &other,
                                   PutLexiconRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif

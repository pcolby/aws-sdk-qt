// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEXICONREQUEST_P_H
#define QTAWS_DELETELEXICONREQUEST_P_H

#include "pollyrequest_p.h"
#include "deletelexiconrequest.h"

namespace QtAws {
namespace Polly {

class DeleteLexiconRequest;

class DeleteLexiconRequestPrivate : public PollyRequestPrivate {

public:
    DeleteLexiconRequestPrivate(const PollyRequest::Action action,
                                   DeleteLexiconRequest * const q);
    DeleteLexiconRequestPrivate(const DeleteLexiconRequestPrivate &other,
                                   DeleteLexiconRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif

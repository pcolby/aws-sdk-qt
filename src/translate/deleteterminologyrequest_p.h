// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETERMINOLOGYREQUEST_P_H
#define QTAWS_DELETETERMINOLOGYREQUEST_P_H

#include "translaterequest_p.h"
#include "deleteterminologyrequest.h"

namespace QtAws {
namespace Translate {

class DeleteTerminologyRequest;

class DeleteTerminologyRequestPrivate : public TranslateRequestPrivate {

public:
    DeleteTerminologyRequestPrivate(const TranslateRequest::Action action,
                                   DeleteTerminologyRequest * const q);
    DeleteTerminologyRequestPrivate(const DeleteTerminologyRequestPrivate &other,
                                   DeleteTerminologyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTerminologyRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

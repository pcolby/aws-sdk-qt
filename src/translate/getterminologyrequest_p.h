// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTERMINOLOGYREQUEST_P_H
#define QTAWS_GETTERMINOLOGYREQUEST_P_H

#include "translaterequest_p.h"
#include "getterminologyrequest.h"

namespace QtAws {
namespace Translate {

class GetTerminologyRequest;

class GetTerminologyRequestPrivate : public TranslateRequestPrivate {

public:
    GetTerminologyRequestPrivate(const TranslateRequest::Action action,
                                   GetTerminologyRequest * const q);
    GetTerminologyRequestPrivate(const GetTerminologyRequestPrivate &other,
                                   GetTerminologyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTerminologyRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

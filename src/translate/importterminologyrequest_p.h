// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTERMINOLOGYREQUEST_P_H
#define QTAWS_IMPORTTERMINOLOGYREQUEST_P_H

#include "translaterequest_p.h"
#include "importterminologyrequest.h"

namespace QtAws {
namespace Translate {

class ImportTerminologyRequest;

class ImportTerminologyRequestPrivate : public TranslateRequestPrivate {

public:
    ImportTerminologyRequestPrivate(const TranslateRequest::Action action,
                                   ImportTerminologyRequest * const q);
    ImportTerminologyRequestPrivate(const ImportTerminologyRequestPrivate &other,
                                   ImportTerminologyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportTerminologyRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTTRANSLATIONJOBREQUEST_P_H
#define QTAWS_STARTTEXTTRANSLATIONJOBREQUEST_P_H

#include "translaterequest_p.h"
#include "starttexttranslationjobrequest.h"

namespace QtAws {
namespace Translate {

class StartTextTranslationJobRequest;

class StartTextTranslationJobRequestPrivate : public TranslateRequestPrivate {

public:
    StartTextTranslationJobRequestPrivate(const TranslateRequest::Action action,
                                   StartTextTranslationJobRequest * const q);
    StartTextTranslationJobRequestPrivate(const StartTextTranslationJobRequestPrivate &other,
                                   StartTextTranslationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTextTranslationJobRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

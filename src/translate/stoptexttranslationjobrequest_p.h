// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTEXTTRANSLATIONJOBREQUEST_P_H
#define QTAWS_STOPTEXTTRANSLATIONJOBREQUEST_P_H

#include "translaterequest_p.h"
#include "stoptexttranslationjobrequest.h"

namespace QtAws {
namespace Translate {

class StopTextTranslationJobRequest;

class StopTextTranslationJobRequestPrivate : public TranslateRequestPrivate {

public:
    StopTextTranslationJobRequestPrivate(const TranslateRequest::Action action,
                                   StopTextTranslationJobRequest * const q);
    StopTextTranslationJobRequestPrivate(const StopTextTranslationJobRequestPrivate &other,
                                   StopTextTranslationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTextTranslationJobRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

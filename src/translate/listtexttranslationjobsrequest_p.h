// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEXTTRANSLATIONJOBSREQUEST_P_H
#define QTAWS_LISTTEXTTRANSLATIONJOBSREQUEST_P_H

#include "translaterequest_p.h"
#include "listtexttranslationjobsrequest.h"

namespace QtAws {
namespace Translate {

class ListTextTranslationJobsRequest;

class ListTextTranslationJobsRequestPrivate : public TranslateRequestPrivate {

public:
    ListTextTranslationJobsRequestPrivate(const TranslateRequest::Action action,
                                   ListTextTranslationJobsRequest * const q);
    ListTextTranslationJobsRequestPrivate(const ListTextTranslationJobsRequestPrivate &other,
                                   ListTextTranslationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTextTranslationJobsRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

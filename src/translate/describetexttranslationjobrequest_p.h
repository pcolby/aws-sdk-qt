// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEXTTRANSLATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBETEXTTRANSLATIONJOBREQUEST_P_H

#include "translaterequest_p.h"
#include "describetexttranslationjobrequest.h"

namespace QtAws {
namespace Translate {

class DescribeTextTranslationJobRequest;

class DescribeTextTranslationJobRequestPrivate : public TranslateRequestPrivate {

public:
    DescribeTextTranslationJobRequestPrivate(const TranslateRequest::Action action,
                                   DescribeTextTranslationJobRequest * const q);
    DescribeTextTranslationJobRequestPrivate(const DescribeTextTranslationJobRequestPrivate &other,
                                   DescribeTextTranslationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTextTranslationJobRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

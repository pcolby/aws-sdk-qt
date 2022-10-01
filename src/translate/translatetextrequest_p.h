// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATETEXTREQUEST_P_H
#define QTAWS_TRANSLATETEXTREQUEST_P_H

#include "translaterequest_p.h"
#include "translatetextrequest.h"

namespace QtAws {
namespace Translate {

class TranslateTextRequest;

class TranslateTextRequestPrivate : public TranslateRequestPrivate {

public:
    TranslateTextRequestPrivate(const TranslateRequest::Action action,
                                   TranslateTextRequest * const q);
    TranslateTextRequestPrivate(const TranslateTextRequestPrivate &other,
                                   TranslateTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(TranslateTextRequest)

};

} // namespace Translate
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGEMODELSREQUEST_P_H
#define QTAWS_LISTLANGUAGEMODELSREQUEST_P_H

#include "transcriberequest_p.h"
#include "listlanguagemodelsrequest.h"

namespace QtAws {
namespace Transcribe {

class ListLanguageModelsRequest;

class ListLanguageModelsRequestPrivate : public TranscribeRequestPrivate {

public:
    ListLanguageModelsRequestPrivate(const TranscribeRequest::Action action,
                                   ListLanguageModelsRequest * const q);
    ListLanguageModelsRequestPrivate(const ListLanguageModelsRequestPrivate &other,
                                   ListLanguageModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLanguageModelsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif

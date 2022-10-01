// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYREQUEST_P_H
#define QTAWS_CREATEVOCABULARYREQUEST_P_H

#include "connectrequest_p.h"
#include "createvocabularyrequest.h"

namespace QtAws {
namespace Connect {

class CreateVocabularyRequest;

class CreateVocabularyRequestPrivate : public ConnectRequestPrivate {

public:
    CreateVocabularyRequestPrivate(const ConnectRequest::Action action,
                                   CreateVocabularyRequest * const q);
    CreateVocabularyRequestPrivate(const CreateVocabularyRequestPrivate &other,
                                   CreateVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

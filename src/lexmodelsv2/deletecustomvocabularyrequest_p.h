// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVOCABULARYREQUEST_P_H
#define QTAWS_DELETECUSTOMVOCABULARYREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deletecustomvocabularyrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteCustomVocabularyRequest;

class DeleteCustomVocabularyRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteCustomVocabularyRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteCustomVocabularyRequest * const q);
    DeleteCustomVocabularyRequestPrivate(const DeleteCustomVocabularyRequestPrivate &other,
                                   DeleteCustomVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomVocabularyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

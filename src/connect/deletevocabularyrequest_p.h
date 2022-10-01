// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYREQUEST_P_H
#define QTAWS_DELETEVOCABULARYREQUEST_P_H

#include "connectrequest_p.h"
#include "deletevocabularyrequest.h"

namespace QtAws {
namespace Connect {

class DeleteVocabularyRequest;

class DeleteVocabularyRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteVocabularyRequestPrivate(const ConnectRequest::Action action,
                                   DeleteVocabularyRequest * const q);
    DeleteVocabularyRequestPrivate(const DeleteVocabularyRequestPrivate &other,
                                   DeleteVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEFAULTVOCABULARYREQUEST_P_H
#define QTAWS_ASSOCIATEDEFAULTVOCABULARYREQUEST_P_H

#include "connectrequest_p.h"
#include "associatedefaultvocabularyrequest.h"

namespace QtAws {
namespace Connect {

class AssociateDefaultVocabularyRequest;

class AssociateDefaultVocabularyRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateDefaultVocabularyRequestPrivate(const ConnectRequest::Action action,
                                   AssociateDefaultVocabularyRequest * const q);
    AssociateDefaultVocabularyRequestPrivate(const AssociateDefaultVocabularyRequestPrivate &other,
                                   AssociateDefaultVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDefaultVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

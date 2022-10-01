// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOCABULARYREQUEST_P_H
#define QTAWS_DESCRIBEVOCABULARYREQUEST_P_H

#include "connectrequest_p.h"
#include "describevocabularyrequest.h"

namespace QtAws {
namespace Connect {

class DescribeVocabularyRequest;

class DescribeVocabularyRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeVocabularyRequestPrivate(const ConnectRequest::Action action,
                                   DescribeVocabularyRequest * const q);
    DescribeVocabularyRequestPrivate(const DescribeVocabularyRequestPrivate &other,
                                   DescribeVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVocabularyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

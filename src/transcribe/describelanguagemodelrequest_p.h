// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELANGUAGEMODELREQUEST_P_H
#define QTAWS_DESCRIBELANGUAGEMODELREQUEST_P_H

#include "transcriberequest_p.h"
#include "describelanguagemodelrequest.h"

namespace QtAws {
namespace Transcribe {

class DescribeLanguageModelRequest;

class DescribeLanguageModelRequestPrivate : public TranscribeRequestPrivate {

public:
    DescribeLanguageModelRequestPrivate(const TranscribeRequest::Action action,
                                   DescribeLanguageModelRequest * const q);
    DescribeLanguageModelRequestPrivate(const DescribeLanguageModelRequestPrivate &other,
                                   DescribeLanguageModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLanguageModelRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif

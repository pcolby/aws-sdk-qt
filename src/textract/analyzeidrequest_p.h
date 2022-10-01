// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEIDREQUEST_P_H
#define QTAWS_ANALYZEIDREQUEST_P_H

#include "textractrequest_p.h"
#include "analyzeidrequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeIDRequest;

class AnalyzeIDRequestPrivate : public TextractRequestPrivate {

public:
    AnalyzeIDRequestPrivate(const TextractRequest::Action action,
                                   AnalyzeIDRequest * const q);
    AnalyzeIDRequestPrivate(const AnalyzeIDRequestPrivate &other,
                                   AnalyzeIDRequest * const q);

private:
    Q_DECLARE_PUBLIC(AnalyzeIDRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

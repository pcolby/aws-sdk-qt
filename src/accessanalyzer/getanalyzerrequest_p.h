// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZERREQUEST_P_H
#define QTAWS_GETANALYZERREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "getanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzerRequest;

class GetAnalyzerRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    GetAnalyzerRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   GetAnalyzerRequest * const q);
    GetAnalyzerRequestPrivate(const GetAnalyzerRequestPrivate &other,
                                   GetAnalyzerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

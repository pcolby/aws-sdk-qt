// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESOURCESCANREQUEST_P_H
#define QTAWS_STARTRESOURCESCANREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "startresourcescanrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartResourceScanRequest;

class StartResourceScanRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    StartResourceScanRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   StartResourceScanRequest * const q);
    StartResourceScanRequestPrivate(const StartResourceScanRequestPrivate &other,
                                   StartResourceScanRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartResourceScanRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

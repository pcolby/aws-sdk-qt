// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYZERREQUEST_P_H
#define QTAWS_DELETEANALYZERREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "deleteanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteAnalyzerRequest;

class DeleteAnalyzerRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    DeleteAnalyzerRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   DeleteAnalyzerRequest * const q);
    DeleteAnalyzerRequestPrivate(const DeleteAnalyzerRequestPrivate &other,
                                   DeleteAnalyzerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYZERREQUEST_P_H
#define QTAWS_CREATEANALYZERREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "createanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAnalyzerRequest;

class CreateAnalyzerRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    CreateAnalyzerRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   CreateAnalyzerRequest * const q);
    CreateAnalyzerRequestPrivate(const CreateAnalyzerRequestPrivate &other,
                                   CreateAnalyzerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

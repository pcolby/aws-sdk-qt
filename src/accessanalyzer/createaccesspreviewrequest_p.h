// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPREVIEWREQUEST_P_H
#define QTAWS_CREATEACCESSPREVIEWREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "createaccesspreviewrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAccessPreviewRequest;

class CreateAccessPreviewRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    CreateAccessPreviewRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   CreateAccessPreviewRequest * const q);
    CreateAccessPreviewRequestPrivate(const CreateAccessPreviewRequestPrivate &other,
                                   CreateAccessPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessPreviewRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

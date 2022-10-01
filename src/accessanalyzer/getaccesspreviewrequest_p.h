// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPREVIEWREQUEST_P_H
#define QTAWS_GETACCESSPREVIEWREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "getaccesspreviewrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAccessPreviewRequest;

class GetAccessPreviewRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    GetAccessPreviewRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   GetAccessPreviewRequest * const q);
    GetAccessPreviewRequestPrivate(const GetAccessPreviewRequestPrivate &other,
                                   GetAccessPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPreviewRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

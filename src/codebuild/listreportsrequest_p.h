// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSREQUEST_P_H
#define QTAWS_LISTREPORTSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listreportsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsRequest;

class ListReportsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListReportsRequestPrivate(const CodeBuildRequest::Action action,
                                   ListReportsRequest * const q);
    ListReportsRequestPrivate(const ListReportsRequestPrivate &other,
                                   ListReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReportsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

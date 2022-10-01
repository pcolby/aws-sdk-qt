// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONTYPESREQUEST_P_H
#define QTAWS_LISTACTIONTYPESREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "listactiontypesrequest.h"

namespace QtAws {
namespace CodePipeline {

class ListActionTypesRequest;

class ListActionTypesRequestPrivate : public CodePipelineRequestPrivate {

public:
    ListActionTypesRequestPrivate(const CodePipelineRequest::Action action,
                                   ListActionTypesRequest * const q);
    ListActionTypesRequestPrivate(const ListActionTypesRequestPrivate &other,
                                   ListActionTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActionTypesRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSREQUEST_P_H
#define QTAWS_DELETETAGSREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "deletetagsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteTagsRequest;

class DeleteTagsRequestPrivate : public MachineLearningRequestPrivate {

public:
    DeleteTagsRequestPrivate(const MachineLearningRequest::Action action,
                                   DeleteTagsRequest * const q);
    DeleteTagsRequestPrivate(const DeleteTagsRequestPrivate &other,
                                   DeleteTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTagsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif

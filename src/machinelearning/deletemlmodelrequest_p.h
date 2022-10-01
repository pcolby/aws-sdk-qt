// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLMODELREQUEST_P_H
#define QTAWS_DELETEMLMODELREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "deletemlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteMLModelRequest;

class DeleteMLModelRequestPrivate : public MachineLearningRequestPrivate {

public:
    DeleteMLModelRequestPrivate(const MachineLearningRequest::Action action,
                                   DeleteMLModelRequest * const q);
    DeleteMLModelRequestPrivate(const DeleteMLModelRequestPrivate &other,
                                   DeleteMLModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif

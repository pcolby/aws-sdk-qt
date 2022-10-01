// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTTEMPLATEREQUEST_P_H
#define QTAWS_DELETEEXPERIMENTTEMPLATEREQUEST_P_H

#include "fisrequest_p.h"
#include "deleteexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class DeleteExperimentTemplateRequest;

class DeleteExperimentTemplateRequestPrivate : public FisRequestPrivate {

public:
    DeleteExperimentTemplateRequestPrivate(const FisRequest::Action action,
                                   DeleteExperimentTemplateRequest * const q);
    DeleteExperimentTemplateRequestPrivate(const DeleteExperimentTemplateRequestPrivate &other,
                                   DeleteExperimentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

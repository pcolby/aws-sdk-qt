// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEEXPERIMENTTEMPLATEREQUEST_P_H

#include "fisrequest_p.h"
#include "updateexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class UpdateExperimentTemplateRequest;

class UpdateExperimentTemplateRequestPrivate : public FisRequestPrivate {

public:
    UpdateExperimentTemplateRequestPrivate(const FisRequest::Action action,
                                   UpdateExperimentTemplateRequest * const q);
    UpdateExperimentTemplateRequestPrivate(const UpdateExperimentTemplateRequestPrivate &other,
                                   UpdateExperimentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

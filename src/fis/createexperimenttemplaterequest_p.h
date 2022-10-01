// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTTEMPLATEREQUEST_P_H
#define QTAWS_CREATEEXPERIMENTTEMPLATEREQUEST_P_H

#include "fisrequest_p.h"
#include "createexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class CreateExperimentTemplateRequest;

class CreateExperimentTemplateRequestPrivate : public FisRequestPrivate {

public:
    CreateExperimentTemplateRequestPrivate(const FisRequest::Action action,
                                   CreateExperimentTemplateRequest * const q);
    CreateExperimentTemplateRequestPrivate(const CreateExperimentTemplateRequestPrivate &other,
                                   CreateExperimentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

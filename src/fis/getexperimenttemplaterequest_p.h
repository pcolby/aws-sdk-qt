// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTTEMPLATEREQUEST_P_H
#define QTAWS_GETEXPERIMENTTEMPLATEREQUEST_P_H

#include "fisrequest_p.h"
#include "getexperimenttemplaterequest.h"

namespace QtAws {
namespace Fis {

class GetExperimentTemplateRequest;

class GetExperimentTemplateRequestPrivate : public FisRequestPrivate {

public:
    GetExperimentTemplateRequestPrivate(const FisRequest::Action action,
                                   GetExperimentTemplateRequest * const q);
    GetExperimentTemplateRequestPrivate(const GetExperimentTemplateRequestPrivate &other,
                                   GetExperimentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExperimentTemplateRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEMAPPINGTEMPLATEREQUEST_P_H
#define QTAWS_EVALUATEMAPPINGTEMPLATEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "evaluatemappingtemplaterequest.h"

namespace QtAws {
namespace AppSync {

class EvaluateMappingTemplateRequest;

class EvaluateMappingTemplateRequestPrivate : public AppSyncRequestPrivate {

public:
    EvaluateMappingTemplateRequestPrivate(const AppSyncRequest::Action action,
                                   EvaluateMappingTemplateRequest * const q);
    EvaluateMappingTemplateRequestPrivate(const EvaluateMappingTemplateRequestPrivate &other,
                                   EvaluateMappingTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(EvaluateMappingTemplateRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

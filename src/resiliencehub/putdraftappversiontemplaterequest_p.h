// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDRAFTAPPVERSIONTEMPLATEREQUEST_P_H
#define QTAWS_PUTDRAFTAPPVERSIONTEMPLATEREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "putdraftappversiontemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class PutDraftAppVersionTemplateRequest;

class PutDraftAppVersionTemplateRequestPrivate : public ResilienceHubRequestPrivate {

public:
    PutDraftAppVersionTemplateRequestPrivate(const ResilienceHubRequest::Action action,
                                   PutDraftAppVersionTemplateRequest * const q);
    PutDraftAppVersionTemplateRequestPrivate(const PutDraftAppVersionTemplateRequestPrivate &other,
                                   PutDraftAppVersionTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDraftAppVersionTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

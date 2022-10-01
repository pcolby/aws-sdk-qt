// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDRAFTAPPVERSIONTEMPLATEREQUEST_H
#define QTAWS_PUTDRAFTAPPVERSIONTEMPLATEREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class PutDraftAppVersionTemplateRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT PutDraftAppVersionTemplateRequest : public ResilienceHubRequest {

public:
    PutDraftAppVersionTemplateRequest(const PutDraftAppVersionTemplateRequest &other);
    PutDraftAppVersionTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDraftAppVersionTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

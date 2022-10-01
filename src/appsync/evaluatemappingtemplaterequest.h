// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEMAPPINGTEMPLATEREQUEST_H
#define QTAWS_EVALUATEMAPPINGTEMPLATEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class EvaluateMappingTemplateRequestPrivate;

class QTAWSAPPSYNC_EXPORT EvaluateMappingTemplateRequest : public AppSyncRequest {

public:
    EvaluateMappingTemplateRequest(const EvaluateMappingTemplateRequest &other);
    EvaluateMappingTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateMappingTemplateRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif

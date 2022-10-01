// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEMAPPINGTEMPLATERESPONSE_H
#define QTAWS_EVALUATEMAPPINGTEMPLATERESPONSE_H

#include "appsyncresponse.h"
#include "evaluatemappingtemplaterequest.h"

namespace QtAws {
namespace AppSync {

class EvaluateMappingTemplateResponsePrivate;

class QTAWSAPPSYNC_EXPORT EvaluateMappingTemplateResponse : public AppSyncResponse {
    Q_OBJECT

public:
    EvaluateMappingTemplateResponse(const EvaluateMappingTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EvaluateMappingTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateMappingTemplateResponse)
    Q_DISABLE_COPY(EvaluateMappingTemplateResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif

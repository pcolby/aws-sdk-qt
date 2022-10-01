// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDRAFTAPPVERSIONTEMPLATERESPONSE_H
#define QTAWS_PUTDRAFTAPPVERSIONTEMPLATERESPONSE_H

#include "resiliencehubresponse.h"
#include "putdraftappversiontemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class PutDraftAppVersionTemplateResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT PutDraftAppVersionTemplateResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    PutDraftAppVersionTemplateResponse(const PutDraftAppVersionTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDraftAppVersionTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDraftAppVersionTemplateResponse)
    Q_DISABLE_COPY(PutDraftAppVersionTemplateResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H

#include "sesresponse.h"
#include "updatecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class UpdateCustomVerificationEmailTemplateResponsePrivate;

class QTAWSSES_EXPORT UpdateCustomVerificationEmailTemplateResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateCustomVerificationEmailTemplateResponse(const UpdateCustomVerificationEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomVerificationEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(UpdateCustomVerificationEmailTemplateResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

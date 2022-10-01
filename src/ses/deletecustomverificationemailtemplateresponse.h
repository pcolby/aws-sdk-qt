// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H

#include "sesresponse.h"
#include "deletecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class DeleteCustomVerificationEmailTemplateResponsePrivate;

class QTAWSSES_EXPORT DeleteCustomVerificationEmailTemplateResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteCustomVerificationEmailTemplateResponse(const DeleteCustomVerificationEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomVerificationEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(DeleteCustomVerificationEmailTemplateResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

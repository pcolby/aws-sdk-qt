// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDVALIDATIONEMAILRESPONSE_H
#define QTAWS_RESENDVALIDATIONEMAILRESPONSE_H

#include "acmresponse.h"
#include "resendvalidationemailrequest.h"

namespace QtAws {
namespace Acm {

class ResendValidationEmailResponsePrivate;

class QTAWSACM_EXPORT ResendValidationEmailResponse : public AcmResponse {
    Q_OBJECT

public:
    ResendValidationEmailResponse(const ResendValidationEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResendValidationEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResendValidationEmailResponse)
    Q_DISABLE_COPY(ResendValidationEmailResponse)

};

} // namespace Acm
} // namespace QtAws

#endif

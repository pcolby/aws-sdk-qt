// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDVALIDATIONEMAILREQUEST_H
#define QTAWS_RESENDVALIDATIONEMAILREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class ResendValidationEmailRequestPrivate;

class QTAWSACM_EXPORT ResendValidationEmailRequest : public AcmRequest {

public:
    ResendValidationEmailRequest(const ResendValidationEmailRequest &other);
    ResendValidationEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResendValidationEmailRequest)

};

} // namespace Acm
} // namespace QtAws

#endif

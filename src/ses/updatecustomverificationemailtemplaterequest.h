// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class UpdateCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSES_EXPORT UpdateCustomVerificationEmailTemplateRequest : public SesRequest {

public:
    UpdateCustomVerificationEmailTemplateRequest(const UpdateCustomVerificationEmailTemplateRequest &other);
    UpdateCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

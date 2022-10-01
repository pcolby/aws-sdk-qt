// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSES_EXPORT DeleteCustomVerificationEmailTemplateRequest : public SesRequest {

public:
    DeleteCustomVerificationEmailTemplateRequest(const DeleteCustomVerificationEmailTemplateRequest &other);
    DeleteCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

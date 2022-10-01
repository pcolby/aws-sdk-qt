// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILTEMPLATEREQUEST_H
#define QTAWS_CREATEEMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT CreateEmailTemplateRequest : public SESv2Request {

public:
    CreateEmailTemplateRequest(const CreateEmailTemplateRequest &other);
    CreateEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

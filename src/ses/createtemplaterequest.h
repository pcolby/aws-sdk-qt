// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEREQUEST_H
#define QTAWS_CREATETEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateTemplateRequestPrivate;

class QTAWSSES_EXPORT CreateTemplateRequest : public SesRequest {

public:
    CreateTemplateRequest(const CreateTemplateRequest &other);
    CreateTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

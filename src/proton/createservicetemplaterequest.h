// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATEREQUEST_H
#define QTAWS_CREATESERVICETEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateRequestPrivate;

class QTAWSPROTON_EXPORT CreateServiceTemplateRequest : public ProtonRequest {

public:
    CreateServiceTemplateRequest(const CreateServiceTemplateRequest &other);
    CreateServiceTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

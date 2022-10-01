// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATEVERSIONREQUEST_H
#define QTAWS_CREATESERVICETEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT CreateServiceTemplateVersionRequest : public ProtonRequest {

public:
    CreateServiceTemplateVersionRequest(const CreateServiceTemplateVersionRequest &other);
    CreateServiceTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

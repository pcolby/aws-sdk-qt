// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATEREQUEST_H
#define QTAWS_CREATEENVIRONMENTTEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateRequestPrivate;

class QTAWSPROTON_EXPORT CreateEnvironmentTemplateRequest : public ProtonRequest {

public:
    CreateEnvironmentTemplateRequest(const CreateEnvironmentTemplateRequest &other);
    CreateEnvironmentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATEREQUEST_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateRequestPrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentTemplateRequest : public ProtonRequest {

public:
    UpdateEnvironmentTemplateRequest(const UpdateEnvironmentTemplateRequest &other);
    UpdateEnvironmentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

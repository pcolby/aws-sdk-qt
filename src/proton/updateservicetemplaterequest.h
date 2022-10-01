// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATEREQUEST_H
#define QTAWS_UPDATESERVICETEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateRequestPrivate;

class QTAWSPROTON_EXPORT UpdateServiceTemplateRequest : public ProtonRequest {

public:
    UpdateServiceTemplateRequest(const UpdateServiceTemplateRequest &other);
    UpdateServiceTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATEREQUEST_H
#define QTAWS_GETSERVICETEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateRequestPrivate;

class QTAWSPROTON_EXPORT GetServiceTemplateRequest : public ProtonRequest {

public:
    GetServiceTemplateRequest(const GetServiceTemplateRequest &other);
    GetServiceTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

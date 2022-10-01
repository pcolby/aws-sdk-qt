// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATEVERSIONREQUEST_H
#define QTAWS_GETSERVICETEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT GetServiceTemplateVersionRequest : public ProtonRequest {

public:
    GetServiceTemplateVersionRequest(const GetServiceTemplateVersionRequest &other);
    GetServiceTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

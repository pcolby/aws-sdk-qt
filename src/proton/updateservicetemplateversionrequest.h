// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATEVERSIONREQUEST_H
#define QTAWS_UPDATESERVICETEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT UpdateServiceTemplateVersionRequest : public ProtonRequest {

public:
    UpdateServiceTemplateVersionRequest(const UpdateServiceTemplateVersionRequest &other);
    UpdateServiceTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

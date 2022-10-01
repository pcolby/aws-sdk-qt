// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATEREQUEST_H
#define QTAWS_DELETESERVICETEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateRequestPrivate;

class QTAWSPROTON_EXPORT DeleteServiceTemplateRequest : public ProtonRequest {

public:
    DeleteServiceTemplateRequest(const DeleteServiceTemplateRequest &other);
    DeleteServiceTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

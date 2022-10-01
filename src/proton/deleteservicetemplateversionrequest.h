// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATEVERSIONREQUEST_H
#define QTAWS_DELETESERVICETEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT DeleteServiceTemplateVersionRequest : public ProtonRequest {

public:
    DeleteServiceTemplateVersionRequest(const DeleteServiceTemplateVersionRequest &other);
    DeleteServiceTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

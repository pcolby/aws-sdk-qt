// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONREQUEST_H
#define QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentTemplateVersionRequest : public ProtonRequest {

public:
    DeleteEnvironmentTemplateVersionRequest(const DeleteEnvironmentTemplateVersionRequest &other);
    DeleteEnvironmentTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

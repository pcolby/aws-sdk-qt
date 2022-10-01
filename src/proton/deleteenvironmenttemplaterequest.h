// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATEREQUEST_H
#define QTAWS_DELETEENVIRONMENTTEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateRequestPrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentTemplateRequest : public ProtonRequest {

public:
    DeleteEnvironmentTemplateRequest(const DeleteEnvironmentTemplateRequest &other);
    DeleteEnvironmentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

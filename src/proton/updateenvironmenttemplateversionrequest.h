// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONREQUEST_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentTemplateVersionRequest : public ProtonRequest {

public:
    UpdateEnvironmentTemplateVersionRequest(const UpdateEnvironmentTemplateVersionRequest &other);
    UpdateEnvironmentTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

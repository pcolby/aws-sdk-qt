// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATEVERSIONREQUEST_H
#define QTAWS_GETENVIRONMENTTEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT GetEnvironmentTemplateVersionRequest : public ProtonRequest {

public:
    GetEnvironmentTemplateVersionRequest(const GetEnvironmentTemplateVersionRequest &other);
    GetEnvironmentTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

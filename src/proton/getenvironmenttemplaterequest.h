// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATEREQUEST_H
#define QTAWS_GETENVIRONMENTTEMPLATEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateRequestPrivate;

class QTAWSPROTON_EXPORT GetEnvironmentTemplateRequest : public ProtonRequest {

public:
    GetEnvironmentTemplateRequest(const GetEnvironmentTemplateRequest &other);
    GetEnvironmentTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

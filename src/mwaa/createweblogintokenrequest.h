// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBLOGINTOKENREQUEST_H
#define QTAWS_CREATEWEBLOGINTOKENREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class CreateWebLoginTokenRequestPrivate;

class QTAWSMWAA_EXPORT CreateWebLoginTokenRequest : public MwaaRequest {

public:
    CreateWebLoginTokenRequest(const CreateWebLoginTokenRequest &other);
    CreateWebLoginTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebLoginTokenRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif

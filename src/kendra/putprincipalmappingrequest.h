// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPRINCIPALMAPPINGREQUEST_H
#define QTAWS_PUTPRINCIPALMAPPINGREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class PutPrincipalMappingRequestPrivate;

class QTAWSKENDRA_EXPORT PutPrincipalMappingRequest : public KendraRequest {

public:
    PutPrincipalMappingRequest(const PutPrincipalMappingRequest &other);
    PutPrincipalMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPrincipalMappingRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif

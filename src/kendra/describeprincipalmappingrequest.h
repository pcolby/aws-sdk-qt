// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALMAPPINGREQUEST_H
#define QTAWS_DESCRIBEPRINCIPALMAPPINGREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DescribePrincipalMappingRequestPrivate;

class QTAWSKENDRA_EXPORT DescribePrincipalMappingRequest : public KendraRequest {

public:
    DescribePrincipalMappingRequest(const DescribePrincipalMappingRequest &other);
    DescribePrincipalMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrincipalMappingRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif

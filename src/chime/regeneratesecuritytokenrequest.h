// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGENERATESECURITYTOKENREQUEST_H
#define QTAWS_REGENERATESECURITYTOKENREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class RegenerateSecurityTokenRequestPrivate;

class QTAWSCHIME_EXPORT RegenerateSecurityTokenRequest : public ChimeRequest {

public:
    RegenerateSecurityTokenRequest(const RegenerateSecurityTokenRequest &other);
    RegenerateSecurityTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegenerateSecurityTokenRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

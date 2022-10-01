// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGENERATESECURITYTOKENRESPONSE_H
#define QTAWS_REGENERATESECURITYTOKENRESPONSE_H

#include "chimeresponse.h"
#include "regeneratesecuritytokenrequest.h"

namespace QtAws {
namespace Chime {

class RegenerateSecurityTokenResponsePrivate;

class QTAWSCHIME_EXPORT RegenerateSecurityTokenResponse : public ChimeResponse {
    Q_OBJECT

public:
    RegenerateSecurityTokenResponse(const RegenerateSecurityTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegenerateSecurityTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegenerateSecurityTokenResponse)
    Q_DISABLE_COPY(RegenerateSecurityTokenResponse)

};

} // namespace Chime
} // namespace QtAws

#endif

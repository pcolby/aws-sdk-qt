// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPLATFORMSRESPONSE_H
#define QTAWS_LISTSIGNINGPLATFORMSRESPONSE_H

#include "signerresponse.h"
#include "listsigningplatformsrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningPlatformsResponsePrivate;

class QTAWSSIGNER_EXPORT ListSigningPlatformsResponse : public SignerResponse {
    Q_OBJECT

public:
    ListSigningPlatformsResponse(const ListSigningPlatformsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSigningPlatformsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningPlatformsResponse)
    Q_DISABLE_COPY(ListSigningPlatformsResponse)

};

} // namespace Signer
} // namespace QtAws

#endif

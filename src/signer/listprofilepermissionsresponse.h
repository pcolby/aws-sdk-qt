// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEPERMISSIONSRESPONSE_H
#define QTAWS_LISTPROFILEPERMISSIONSRESPONSE_H

#include "signerresponse.h"
#include "listprofilepermissionsrequest.h"

namespace QtAws {
namespace Signer {

class ListProfilePermissionsResponsePrivate;

class QTAWSSIGNER_EXPORT ListProfilePermissionsResponse : public SignerResponse {
    Q_OBJECT

public:
    ListProfilePermissionsResponse(const ListProfilePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProfilePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfilePermissionsResponse)
    Q_DISABLE_COPY(ListProfilePermissionsResponse)

};

} // namespace Signer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPROFILESRESPONSE_H
#define QTAWS_LISTSIGNINGPROFILESRESPONSE_H

#include "signerresponse.h"
#include "listsigningprofilesrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningProfilesResponsePrivate;

class QTAWSSIGNER_EXPORT ListSigningProfilesResponse : public SignerResponse {
    Q_OBJECT

public:
    ListSigningProfilesResponse(const ListSigningProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSigningProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningProfilesResponse)
    Q_DISABLE_COPY(ListSigningProfilesResponse)

};

} // namespace Signer
} // namespace QtAws

#endif

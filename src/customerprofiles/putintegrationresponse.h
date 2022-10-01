// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSE_H
#define QTAWS_PUTINTEGRATIONRESPONSE_H

#include "customerprofilesresponse.h"
#include "putintegrationrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutIntegrationResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT PutIntegrationResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    PutIntegrationResponse(const PutIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntegrationResponse)
    Q_DISABLE_COPY(PutIntegrationResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

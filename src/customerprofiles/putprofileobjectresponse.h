// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTRESPONSE_H
#define QTAWS_PUTPROFILEOBJECTRESPONSE_H

#include "customerprofilesresponse.h"
#include "putprofileobjectrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT PutProfileObjectResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    PutProfileObjectResponse(const PutProfileObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutProfileObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProfileObjectResponse)
    Q_DISABLE_COPY(PutProfileObjectResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

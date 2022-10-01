// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYRESOLUTIONJOBRESPONSE_H
#define QTAWS_GETIDENTITYRESOLUTIONJOBRESPONSE_H

#include "customerprofilesresponse.h"
#include "getidentityresolutionjobrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetIdentityResolutionJobResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetIdentityResolutionJobResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetIdentityResolutionJobResponse(const GetIdentityResolutionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityResolutionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityResolutionJobResponse)
    Q_DISABLE_COPY(GetIdentityResolutionJobResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

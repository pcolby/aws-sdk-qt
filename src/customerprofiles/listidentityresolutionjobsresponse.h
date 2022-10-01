// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYRESOLUTIONJOBSRESPONSE_H
#define QTAWS_LISTIDENTITYRESOLUTIONJOBSRESPONSE_H

#include "customerprofilesresponse.h"
#include "listidentityresolutionjobsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIdentityResolutionJobsResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListIdentityResolutionJobsResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListIdentityResolutionJobsResponse(const ListIdentityResolutionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityResolutionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityResolutionJobsResponse)
    Q_DISABLE_COPY(ListIdentityResolutionJobsResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

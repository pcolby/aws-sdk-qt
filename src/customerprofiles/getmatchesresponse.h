// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMATCHESRESPONSE_H
#define QTAWS_GETMATCHESRESPONSE_H

#include "customerprofilesresponse.h"
#include "getmatchesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetMatchesResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetMatchesResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetMatchesResponse(const GetMatchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMatchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMatchesResponse)
    Q_DISABLE_COPY(GetMatchesResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

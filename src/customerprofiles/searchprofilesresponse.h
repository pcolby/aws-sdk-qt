// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROFILESRESPONSE_H
#define QTAWS_SEARCHPROFILESRESPONSE_H

#include "customerprofilesresponse.h"
#include "searchprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class SearchProfilesResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT SearchProfilesResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    SearchProfilesResponse(const SearchProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProfilesResponse)
    Q_DISABLE_COPY(SearchProfilesResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

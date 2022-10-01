// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROUTINGPROFILESRESPONSE_H
#define QTAWS_SEARCHROUTINGPROFILESRESPONSE_H

#include "connectresponse.h"
#include "searchroutingprofilesrequest.h"

namespace QtAws {
namespace Connect {

class SearchRoutingProfilesResponsePrivate;

class QTAWSCONNECT_EXPORT SearchRoutingProfilesResponse : public ConnectResponse {
    Q_OBJECT

public:
    SearchRoutingProfilesResponse(const SearchRoutingProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchRoutingProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchRoutingProfilesResponse)
    Q_DISABLE_COPY(SearchRoutingProfilesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

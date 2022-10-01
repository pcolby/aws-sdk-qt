// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFARGATEPROFILESRESPONSE_H
#define QTAWS_LISTFARGATEPROFILESRESPONSE_H

#include "eksresponse.h"
#include "listfargateprofilesrequest.h"

namespace QtAws {
namespace Eks {

class ListFargateProfilesResponsePrivate;

class QTAWSEKS_EXPORT ListFargateProfilesResponse : public EksResponse {
    Q_OBJECT

public:
    ListFargateProfilesResponse(const ListFargateProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFargateProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFargateProfilesResponse)
    Q_DISABLE_COPY(ListFargateProfilesResponse)

};

} // namespace Eks
} // namespace QtAws

#endif

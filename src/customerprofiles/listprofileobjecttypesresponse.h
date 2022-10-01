// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPESRESPONSE_H
#define QTAWS_LISTPROFILEOBJECTTYPESRESPONSE_H

#include "customerprofilesresponse.h"
#include "listprofileobjecttypesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypesResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListProfileObjectTypesResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListProfileObjectTypesResponse(const ListProfileObjectTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProfileObjectTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileObjectTypesResponse)
    Q_DISABLE_COPY(ListProfileObjectTypesResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

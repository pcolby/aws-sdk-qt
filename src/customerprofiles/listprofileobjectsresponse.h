// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTSRESPONSE_H
#define QTAWS_LISTPROFILEOBJECTSRESPONSE_H

#include "customerprofilesresponse.h"
#include "listprofileobjectsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectsResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListProfileObjectsResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListProfileObjectsResponse(const ListProfileObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProfileObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileObjectsResponse)
    Q_DISABLE_COPY(ListProfileObjectsResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

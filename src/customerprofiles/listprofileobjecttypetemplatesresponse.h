// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPETEMPLATESRESPONSE_H
#define QTAWS_LISTPROFILEOBJECTTYPETEMPLATESRESPONSE_H

#include "customerprofilesresponse.h"
#include "listprofileobjecttypetemplatesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypeTemplatesResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListProfileObjectTypeTemplatesResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListProfileObjectTypeTemplatesResponse(const ListProfileObjectTypeTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProfileObjectTypeTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileObjectTypeTemplatesResponse)
    Q_DISABLE_COPY(ListProfileObjectTypeTemplatesResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

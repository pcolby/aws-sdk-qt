// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPERESPONSE_H
#define QTAWS_GETPROFILEOBJECTTYPERESPONSE_H

#include "customerprofilesresponse.h"
#include "getprofileobjecttyperequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetProfileObjectTypeResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetProfileObjectTypeResponse(const GetProfileObjectTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProfileObjectTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileObjectTypeResponse)
    Q_DISABLE_COPY(GetProfileObjectTypeResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

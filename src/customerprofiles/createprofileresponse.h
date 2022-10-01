// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILERESPONSE_H
#define QTAWS_CREATEPROFILERESPONSE_H

#include "customerprofilesresponse.h"
#include "createprofilerequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateProfileResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT CreateProfileResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    CreateProfileResponse(const CreateProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfileResponse)
    Q_DISABLE_COPY(CreateProfileResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

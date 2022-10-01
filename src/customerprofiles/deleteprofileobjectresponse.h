// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTRESPONSE_H
#define QTAWS_DELETEPROFILEOBJECTRESPONSE_H

#include "customerprofilesresponse.h"
#include "deleteprofileobjectrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteProfileObjectResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    DeleteProfileObjectResponse(const DeleteProfileObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProfileObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileObjectResponse)
    Q_DISABLE_COPY(DeleteProfileObjectResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEKEYRESPONSE_H
#define QTAWS_ADDPROFILEKEYRESPONSE_H

#include "customerprofilesresponse.h"
#include "addprofilekeyrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class AddProfileKeyResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT AddProfileKeyResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    AddProfileKeyResponse(const AddProfileKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddProfileKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddProfileKeyResponse)
    Q_DISABLE_COPY(AddProfileKeyResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

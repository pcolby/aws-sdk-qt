// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTTYPERESPONSE_H
#define QTAWS_DELETEPROFILEOBJECTTYPERESPONSE_H

#include "customerprofilesresponse.h"
#include "deleteprofileobjecttyperequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectTypeResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteProfileObjectTypeResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    DeleteProfileObjectTypeResponse(const DeleteProfileObjectTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProfileObjectTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileObjectTypeResponse)
    Q_DISABLE_COPY(DeleteProfileObjectTypeResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

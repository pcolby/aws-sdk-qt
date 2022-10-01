// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTTYPERESPONSE_H
#define QTAWS_PUTPROFILEOBJECTTYPERESPONSE_H

#include "customerprofilesresponse.h"
#include "putprofileobjecttyperequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectTypeResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT PutProfileObjectTypeResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    PutProfileObjectTypeResponse(const PutProfileObjectTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutProfileObjectTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProfileObjectTypeResponse)
    Q_DISABLE_COPY(PutProfileObjectTypeResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

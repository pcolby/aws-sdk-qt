// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPETEMPLATERESPONSE_H
#define QTAWS_GETPROFILEOBJECTTYPETEMPLATERESPONSE_H

#include "customerprofilesresponse.h"
#include "getprofileobjecttypetemplaterequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeTemplateResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetProfileObjectTypeTemplateResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetProfileObjectTypeTemplateResponse(const GetProfileObjectTypeTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProfileObjectTypeTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileObjectTypeTemplateResponse)
    Q_DISABLE_COPY(GetProfileObjectTypeTemplateResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILERESPONSE_H
#define QTAWS_CREATEPROFILERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "createprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateProfileResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateProfileResponse : public AlexaForBusinessResponse {
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

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

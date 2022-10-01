// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPROVIDERRESPONSE_H
#define QTAWS_GETCONFERENCEPROVIDERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferenceProviderResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetConferenceProviderResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetConferenceProviderResponse(const GetConferenceProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConferenceProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConferenceProviderResponse)
    Q_DISABLE_COPY(GetConferenceProviderResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

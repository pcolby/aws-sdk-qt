// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFERENCEPROVIDERRESPONSE_H
#define QTAWS_CREATECONFERENCEPROVIDERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "createconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateConferenceProviderResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateConferenceProviderResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    CreateConferenceProviderResponse(const CreateConferenceProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConferenceProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConferenceProviderResponse)
    Q_DISABLE_COPY(CreateConferenceProviderResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

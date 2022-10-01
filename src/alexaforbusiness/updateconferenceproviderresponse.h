// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFERENCEPROVIDERRESPONSE_H
#define QTAWS_UPDATECONFERENCEPROVIDERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updateconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateConferenceProviderResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateConferenceProviderResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateConferenceProviderResponse(const UpdateConferenceProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConferenceProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConferenceProviderResponse)
    Q_DISABLE_COPY(UpdateConferenceProviderResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

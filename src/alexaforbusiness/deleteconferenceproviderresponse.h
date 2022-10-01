// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFERENCEPROVIDERRESPONSE_H
#define QTAWS_DELETECONFERENCEPROVIDERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deleteconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteConferenceProviderResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteConferenceProviderResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteConferenceProviderResponse(const DeleteConferenceProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConferenceProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConferenceProviderResponse)
    Q_DISABLE_COPY(DeleteConferenceProviderResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

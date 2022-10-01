// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFERENCEPROVIDERSRESPONSE_H
#define QTAWS_LISTCONFERENCEPROVIDERSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listconferenceprovidersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListConferenceProvidersResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListConferenceProvidersResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListConferenceProvidersResponse(const ListConferenceProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConferenceProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConferenceProvidersResponse)
    Q_DISABLE_COPY(ListConferenceProvidersResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

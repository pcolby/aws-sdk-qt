// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPREFERENCERESPONSE_H
#define QTAWS_GETCONFERENCEPREFERENCERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getconferencepreferencerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferencePreferenceResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetConferencePreferenceResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetConferencePreferenceResponse(const GetConferencePreferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConferencePreferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConferencePreferenceResponse)
    Q_DISABLE_COPY(GetConferencePreferenceResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

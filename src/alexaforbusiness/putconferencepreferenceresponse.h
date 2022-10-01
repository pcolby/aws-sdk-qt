// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFERENCEPREFERENCERESPONSE_H
#define QTAWS_PUTCONFERENCEPREFERENCERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "putconferencepreferencerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutConferencePreferenceResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutConferencePreferenceResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    PutConferencePreferenceResponse(const PutConferencePreferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConferencePreferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConferencePreferenceResponse)
    Q_DISABLE_COPY(PutConferencePreferenceResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

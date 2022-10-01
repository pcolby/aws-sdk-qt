// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAUDSTERREGISTRATIONJOBSRESPONSE_H
#define QTAWS_LISTFRAUDSTERREGISTRATIONJOBSRESPONSE_H

#include "voiceidresponse.h"
#include "listfraudsterregistrationjobsrequest.h"

namespace QtAws {
namespace VoiceId {

class ListFraudsterRegistrationJobsResponsePrivate;

class QTAWSVOICEID_EXPORT ListFraudsterRegistrationJobsResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    ListFraudsterRegistrationJobsResponse(const ListFraudsterRegistrationJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFraudsterRegistrationJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFraudsterRegistrationJobsResponse)
    Q_DISABLE_COPY(ListFraudsterRegistrationJobsResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif

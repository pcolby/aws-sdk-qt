// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAUDSTERREGISTRATIONJOBSREQUEST_H
#define QTAWS_LISTFRAUDSTERREGISTRATIONJOBSREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class ListFraudsterRegistrationJobsRequestPrivate;

class QTAWSVOICEID_EXPORT ListFraudsterRegistrationJobsRequest : public VoiceIdRequest {

public:
    ListFraudsterRegistrationJobsRequest(const ListFraudsterRegistrationJobsRequest &other);
    ListFraudsterRegistrationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFraudsterRegistrationJobsRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERENROLLMENTJOBSREQUEST_H
#define QTAWS_LISTSPEAKERENROLLMENTJOBSREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakerEnrollmentJobsRequestPrivate;

class QTAWSVOICEID_EXPORT ListSpeakerEnrollmentJobsRequest : public VoiceIdRequest {

public:
    ListSpeakerEnrollmentJobsRequest(const ListSpeakerEnrollmentJobsRequest &other);
    ListSpeakerEnrollmentJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSpeakerEnrollmentJobsRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif

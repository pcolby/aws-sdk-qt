// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSJOBREQUEST_H
#define QTAWS_GETCALLANALYTICSJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT GetCallAnalyticsJobRequest : public TranscribeRequest {

public:
    GetCallAnalyticsJobRequest(const GetCallAnalyticsJobRequest &other);
    GetCallAnalyticsJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCallAnalyticsJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif

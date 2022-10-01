// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSJOBREQUEST_H
#define QTAWS_DELETECALLANALYTICSJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteCallAnalyticsJobRequest : public TranscribeRequest {

public:
    DeleteCallAnalyticsJobRequest(const DeleteCallAnalyticsJobRequest &other);
    DeleteCallAnalyticsJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCallAnalyticsJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif

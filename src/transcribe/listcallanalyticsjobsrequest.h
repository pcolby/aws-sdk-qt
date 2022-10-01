// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSJOBSREQUEST_H
#define QTAWS_LISTCALLANALYTICSJOBSREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsJobsRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListCallAnalyticsJobsRequest : public TranscribeRequest {

public:
    ListCallAnalyticsJobsRequest(const ListCallAnalyticsJobsRequest &other);
    ListCallAnalyticsJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCallAnalyticsJobsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPHRASESDETECTIONJOBSREQUEST_H
#define QTAWS_LISTKEYPHRASESDETECTIONJOBSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListKeyPhrasesDetectionJobsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListKeyPhrasesDetectionJobsRequest : public ComprehendRequest {

public:
    ListKeyPhrasesDetectionJobsRequest(const ListKeyPhrasesDetectionJobsRequest &other);
    ListKeyPhrasesDetectionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyPhrasesDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPKEYPHRASESDETECTIONJOBREQUEST_H
#define QTAWS_STOPKEYPHRASESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopKeyPhrasesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopKeyPhrasesDetectionJobRequest : public ComprehendRequest {

public:
    StopKeyPhrasesDetectionJobRequest(const StopKeyPhrasesDetectionJobRequest &other);
    StopKeyPhrasesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopKeyPhrasesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTKEYPHRASESDETECTIONJOBREQUEST_H
#define QTAWS_STARTKEYPHRASESDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartKeyPhrasesDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartKeyPhrasesDetectionJobRequest : public ComprehendRequest {

public:
    StartKeyPhrasesDetectionJobRequest(const StartKeyPhrasesDetectionJobRequest &other);
    StartKeyPhrasesDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartKeyPhrasesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBREQUEST_H
#define QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopDominantLanguageDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopDominantLanguageDetectionJobRequest : public ComprehendRequest {

public:
    StopDominantLanguageDetectionJobRequest(const StopDominantLanguageDetectionJobRequest &other);
    StopDominantLanguageDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDominantLanguageDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

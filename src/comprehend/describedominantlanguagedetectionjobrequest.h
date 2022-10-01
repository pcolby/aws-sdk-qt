// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDominantLanguageDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeDominantLanguageDetectionJobRequest : public ComprehendRequest {

public:
    DescribeDominantLanguageDetectionJobRequest(const DescribeDominantLanguageDetectionJobRequest &other);
    DescribeDominantLanguageDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDominantLanguageDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

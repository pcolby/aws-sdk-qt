// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTANOMALIESREQUEST_H
#define QTAWS_DETECTANOMALIESREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class DetectAnomaliesRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT DetectAnomaliesRequest : public LookoutVisionRequest {

public:
    DetectAnomaliesRequest(const DetectAnomaliesRequest &other);
    DetectAnomaliesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectAnomaliesRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

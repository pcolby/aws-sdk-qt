// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPIIENTITIESREQUEST_H
#define QTAWS_DETECTPIIENTITIESREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectPiiEntitiesRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DetectPiiEntitiesRequest : public ComprehendRequest {

public:
    DetectPiiEntitiesRequest(const DetectPiiEntitiesRequest &other);
    DetectPiiEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectPiiEntitiesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

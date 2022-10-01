// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTENTITIESREQUEST_H
#define QTAWS_BATCHDETECTENTITIESREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectEntitiesRequestPrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectEntitiesRequest : public ComprehendRequest {

public:
    BatchDetectEntitiesRequest(const BatchDetectEntitiesRequest &other);
    BatchDetectEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectEntitiesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

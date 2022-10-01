// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTAINSPIIENTITIESREQUEST_H
#define QTAWS_CONTAINSPIIENTITIESREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ContainsPiiEntitiesRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ContainsPiiEntitiesRequest : public ComprehendRequest {

public:
    ContainsPiiEntitiesRequest(const ContainsPiiEntitiesRequest &other);
    ContainsPiiEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ContainsPiiEntitiesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

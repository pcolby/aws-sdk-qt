// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEREQUESTSREQUEST_H
#define QTAWS_LISTRESOURCEREQUESTSREQUEST_H

#include "cloudcontrolrequest.h"

namespace QtAws {
namespace CloudControl {

class ListResourceRequestsRequestPrivate;

class QTAWSCLOUDCONTROL_EXPORT ListResourceRequestsRequest : public CloudControlRequest {

public:
    ListResourceRequestsRequest(const ListResourceRequestsRequest &other);
    ListResourceRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceRequestsRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif

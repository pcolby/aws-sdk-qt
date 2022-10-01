// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_H
#define QTAWS_DELETEENDPOINTREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteEndpointRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DeleteEndpointRequest : public ComprehendRequest {

public:
    DeleteEndpointRequest(const DeleteEndpointRequest &other);
    DeleteEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

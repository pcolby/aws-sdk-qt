// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_H
#define QTAWS_DELETEENDPOINTREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class DeleteEndpointRequestPrivate;

class QTAWSSNS_EXPORT DeleteEndpointRequest : public SnsRequest {

public:
    DeleteEndpointRequest(const DeleteEndpointRequest &other);
    DeleteEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

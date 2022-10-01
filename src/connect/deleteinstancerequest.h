// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEREQUEST_H
#define QTAWS_DELETEINSTANCEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DeleteInstanceRequestPrivate;

class QTAWSCONNECT_EXPORT DeleteInstanceRequest : public ConnectRequest {

public:
    DeleteInstanceRequest(const DeleteInstanceRequest &other);
    DeleteInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

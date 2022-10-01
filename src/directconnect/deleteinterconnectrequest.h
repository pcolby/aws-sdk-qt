// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERCONNECTREQUEST_H
#define QTAWS_DELETEINTERCONNECTREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteInterconnectRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteInterconnectRequest : public DirectConnectRequest {

public:
    DeleteInterconnectRequest(const DeleteInterconnectRequest &other);
    DeleteInterconnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

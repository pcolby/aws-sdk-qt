// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELISTENERREQUEST_H
#define QTAWS_DELETELISTENERREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteListenerRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteListenerRequest : public GlobalAcceleratorRequest {

public:
    DeleteListenerRequest(const DeleteListenerRequest &other);
    DeleteListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

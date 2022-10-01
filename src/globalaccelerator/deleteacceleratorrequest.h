// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCELERATORREQUEST_H
#define QTAWS_DELETEACCELERATORREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteAcceleratorRequest : public GlobalAcceleratorRequest {

public:
    DeleteAcceleratorRequest(const DeleteAcceleratorRequest &other);
    DeleteAcceleratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

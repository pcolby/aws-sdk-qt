// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELISTENERREQUEST_H
#define QTAWS_UPDATELISTENERREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateListenerRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateListenerRequest : public GlobalAcceleratorRequest {

public:
    UpdateListenerRequest(const UpdateListenerRequest &other);
    UpdateListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

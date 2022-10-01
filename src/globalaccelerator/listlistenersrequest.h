// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLISTENERSREQUEST_H
#define QTAWS_LISTLISTENERSREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListListenersRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListListenersRequest : public GlobalAcceleratorRequest {

public:
    ListListenersRequest(const ListListenersRequest &other);
    ListListenersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListListenersRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

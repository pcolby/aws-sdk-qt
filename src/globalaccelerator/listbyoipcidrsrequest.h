// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYOIPCIDRSREQUEST_H
#define QTAWS_LISTBYOIPCIDRSREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListByoipCidrsRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListByoipCidrsRequest : public GlobalAcceleratorRequest {

public:
    ListByoipCidrsRequest(const ListByoipCidrsRequest &other);
    ListByoipCidrsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListByoipCidrsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

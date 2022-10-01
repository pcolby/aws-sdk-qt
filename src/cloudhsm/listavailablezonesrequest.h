// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEZONESREQUEST_H
#define QTAWS_LISTAVAILABLEZONESREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListAvailableZonesRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ListAvailableZonesRequest : public CloudHsmRequest {

public:
    ListAvailableZonesRequest(const ListAvailableZonesRequest &other);
    ListAvailableZonesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableZonesRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

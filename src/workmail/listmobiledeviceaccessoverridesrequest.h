// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESREQUEST_H
#define QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessOverridesRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListMobileDeviceAccessOverridesRequest : public WorkMailRequest {

public:
    ListMobileDeviceAccessOverridesRequest(const ListMobileDeviceAccessOverridesRequest &other);
    ListMobileDeviceAccessOverridesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMobileDeviceAccessOverridesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

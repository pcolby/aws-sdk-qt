// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSRULESREQUEST_H
#define QTAWS_LISTMOBILEDEVICEACCESSRULESREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessRulesRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListMobileDeviceAccessRulesRequest : public WorkMailRequest {

public:
    ListMobileDeviceAccessRulesRequest(const ListMobileDeviceAccessRulesRequest &other);
    ListMobileDeviceAccessRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMobileDeviceAccessRulesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

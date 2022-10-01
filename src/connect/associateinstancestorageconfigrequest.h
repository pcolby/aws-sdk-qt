// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCESTORAGECONFIGREQUEST_H
#define QTAWS_ASSOCIATEINSTANCESTORAGECONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateInstanceStorageConfigRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateInstanceStorageConfigRequest : public ConnectRequest {

public:
    AssociateInstanceStorageConfigRequest(const AssociateInstanceStorageConfigRequest &other);
    AssociateInstanceStorageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

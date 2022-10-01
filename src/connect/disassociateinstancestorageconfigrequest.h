// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGREQUEST_H
#define QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateInstanceStorageConfigRequestPrivate;

class QTAWSCONNECT_EXPORT DisassociateInstanceStorageConfigRequest : public ConnectRequest {

public:
    DisassociateInstanceStorageConfigRequest(const DisassociateInstanceStorageConfigRequest &other);
    DisassociateInstanceStorageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

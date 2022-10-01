// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSETSREQUEST_H
#define QTAWS_DISASSOCIATEASSETSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateAssetsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DisassociateAssetsRequest : public IoTSiteWiseRequest {

public:
    DisassociateAssetsRequest(const DisassociateAssetsRequest &other);
    DisassociateAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

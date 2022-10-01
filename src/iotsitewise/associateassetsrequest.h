// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSETSREQUEST_H
#define QTAWS_ASSOCIATEASSETSREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateAssetsRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT AssociateAssetsRequest : public IoTSiteWiseRequest {

public:
    AssociateAssetsRequest(const AssociateAssetsRequest &other);
    AssociateAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

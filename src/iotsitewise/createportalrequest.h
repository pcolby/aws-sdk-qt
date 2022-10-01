// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTALREQUEST_H
#define QTAWS_CREATEPORTALREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreatePortalRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT CreatePortalRequest : public IoTSiteWiseRequest {

public:
    CreatePortalRequest(const CreatePortalRequest &other);
    CreatePortalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortalRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

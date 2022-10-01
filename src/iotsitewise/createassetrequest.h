// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETREQUEST_H
#define QTAWS_CREATEASSETREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT CreateAssetRequest : public IoTSiteWiseRequest {

public:
    CreateAssetRequest(const CreateAssetRequest &other);
    CreateAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssetRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

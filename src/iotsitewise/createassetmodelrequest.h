// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETMODELREQUEST_H
#define QTAWS_CREATEASSETMODELREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetModelRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT CreateAssetModelRequest : public IoTSiteWiseRequest {

public:
    CreateAssetModelRequest(const CreateAssetModelRequest &other);
    CreateAssetModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssetModelRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

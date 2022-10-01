// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETMODELREQUEST_P_H
#define QTAWS_CREATEASSETMODELREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "createassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetModelRequest;

class CreateAssetModelRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreateAssetModelRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreateAssetModelRequest * const q);
    CreateAssetModelRequestPrivate(const CreateAssetModelRequestPrivate &other,
                                   CreateAssetModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssetModelRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

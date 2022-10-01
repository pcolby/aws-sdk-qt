// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTPROPERTYVALUESREQUEST_H
#define QTAWS_BATCHPUTPROPERTYVALUESREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class BatchPutPropertyValuesRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT BatchPutPropertyValuesRequest : public IoTTwinMakerRequest {

public:
    BatchPutPropertyValuesRequest(const BatchPutPropertyValuesRequest &other);
    BatchPutPropertyValuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutPropertyValuesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

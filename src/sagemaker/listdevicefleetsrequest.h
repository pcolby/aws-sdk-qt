// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEFLEETSREQUEST_H
#define QTAWS_LISTDEVICEFLEETSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDeviceFleetsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListDeviceFleetsRequest : public SageMakerRequest {

public:
    ListDeviceFleetsRequest(const ListDeviceFleetsRequest &other);
    ListDeviceFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceFleetsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

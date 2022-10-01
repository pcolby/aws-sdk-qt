// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEVICESREQUEST_H
#define QTAWS_LISTSTAGEDEVICESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListStageDevicesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListStageDevicesRequest : public SageMakerRequest {

public:
    ListStageDevicesRequest(const ListStageDevicesRequest &other);
    ListStageDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStageDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

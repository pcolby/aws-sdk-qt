// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDREQUEST_H
#define QTAWS_GETRECORDREQUEST_H

#include "sagemakerfeaturestoreruntimerequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class GetRecordRequestPrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT GetRecordRequest : public SageMakerFeatureStoreRuntimeRequest {

public:
    GetRecordRequest(const GetRecordRequest &other);
    GetRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecordRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif

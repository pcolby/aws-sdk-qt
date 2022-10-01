// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDREQUEST_H
#define QTAWS_DELETERECORDREQUEST_H

#include "sagemakerfeaturestoreruntimerequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class DeleteRecordRequestPrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT DeleteRecordRequest : public SageMakerFeatureStoreRuntimeRequest {

public:
    DeleteRecordRequest(const DeleteRecordRequest &other);
    DeleteRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecordRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif

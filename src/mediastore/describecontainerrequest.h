// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERREQUEST_H
#define QTAWS_DESCRIBECONTAINERREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class DescribeContainerRequestPrivate;

class QTAWSMEDIASTORE_EXPORT DescribeContainerRequest : public MediaStoreRequest {

public:
    DescribeContainerRequest(const DescribeContainerRequest &other);
    DescribeContainerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContainerRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif

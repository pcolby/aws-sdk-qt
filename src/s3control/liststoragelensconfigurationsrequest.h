// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTORAGELENSCONFIGURATIONSREQUEST_H
#define QTAWS_LISTSTORAGELENSCONFIGURATIONSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class ListStorageLensConfigurationsRequestPrivate;

class QTAWSS3CONTROL_EXPORT ListStorageLensConfigurationsRequest : public S3ControlRequest {

public:
    ListStorageLensConfigurationsRequest(const ListStorageLensConfigurationsRequest &other);
    ListStorageLensConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStorageLensConfigurationsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif

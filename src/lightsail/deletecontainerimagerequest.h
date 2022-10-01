// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERIMAGEREQUEST_H
#define QTAWS_DELETECONTAINERIMAGEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerImageRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteContainerImageRequest : public LightsailRequest {

public:
    DeleteContainerImageRequest(const DeleteContainerImageRequest &other);
    DeleteContainerImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerImageRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

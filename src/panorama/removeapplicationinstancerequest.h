// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAPPLICATIONINSTANCEREQUEST_H
#define QTAWS_REMOVEAPPLICATIONINSTANCEREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class RemoveApplicationInstanceRequestPrivate;

class QTAWSPANORAMA_EXPORT RemoveApplicationInstanceRequest : public PanoramaRequest {

public:
    RemoveApplicationInstanceRequest(const RemoveApplicationInstanceRequest &other);
    RemoveApplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveApplicationInstanceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

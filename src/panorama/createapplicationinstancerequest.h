// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONINSTANCEREQUEST_H
#define QTAWS_CREATEAPPLICATIONINSTANCEREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class CreateApplicationInstanceRequestPrivate;

class QTAWSPANORAMA_EXPORT CreateApplicationInstanceRequest : public PanoramaRequest {

public:
    CreateApplicationInstanceRequest(const CreateApplicationInstanceRequest &other);
    CreateApplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationInstanceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGEIMPORTJOBREQUEST_H
#define QTAWS_CREATEPACKAGEIMPORTJOBREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class CreatePackageImportJobRequestPrivate;

class QTAWSPANORAMA_EXPORT CreatePackageImportJobRequest : public PanoramaRequest {

public:
    CreatePackageImportJobRequest(const CreatePackageImportJobRequest &other);
    CreatePackageImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackageImportJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

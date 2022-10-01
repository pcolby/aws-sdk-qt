// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHARVESTJOBREQUEST_H
#define QTAWS_CREATEHARVESTJOBREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateHarvestJobRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT CreateHarvestJobRequest : public MediaPackageRequest {

public:
    CreateHarvestJobRequest(const CreateHarvestJobRequest &other);
    CreateHarvestJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHarvestJobRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

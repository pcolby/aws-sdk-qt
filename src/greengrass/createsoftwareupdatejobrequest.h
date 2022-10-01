// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOFTWAREUPDATEJOBREQUEST_H
#define QTAWS_CREATESOFTWAREUPDATEJOBREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSoftwareUpdateJobRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateSoftwareUpdateJobRequest : public GreengrassRequest {

public:
    CreateSoftwareUpdateJobRequest(const CreateSoftwareUpdateJobRequest &other);
    CreateSoftwareUpdateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSoftwareUpdateJobRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif

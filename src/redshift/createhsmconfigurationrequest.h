// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCONFIGURATIONREQUEST_H
#define QTAWS_CREATEHSMCONFIGURATIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateHsmConfigurationRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateHsmConfigurationRequest : public RedshiftRequest {

public:
    CreateHsmConfigurationRequest(const CreateHsmConfigurationRequest &other);
    CreateHsmConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHsmConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMCONFIGURATIONREQUEST_H
#define QTAWS_DELETEHSMCONFIGURATIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmConfigurationRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteHsmConfigurationRequest : public RedshiftRequest {

public:
    DeleteHsmConfigurationRequest(const DeleteHsmConfigurationRequest &other);
    DeleteHsmConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHsmConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

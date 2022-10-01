// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAQUACONFIGURATIONREQUEST_H
#define QTAWS_MODIFYAQUACONFIGURATIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyAquaConfigurationRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyAquaConfigurationRequest : public RedshiftRequest {

public:
    ModifyAquaConfigurationRequest(const ModifyAquaConfigurationRequest &other);
    ModifyAquaConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAquaConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLECONFIGURATIONREQUEST_H
#define QTAWS_PUTLIFECYCLECONFIGURATIONREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class PutLifecycleConfigurationRequestPrivate;

class QTAWSEFS_EXPORT PutLifecycleConfigurationRequest : public EfsRequest {

public:
    PutLifecycleConfigurationRequest(const PutLifecycleConfigurationRequest &other);
    PutLifecycleConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTERMINATIONPROTECTIONREQUEST_H
#define QTAWS_SETTERMINATIONPROTECTIONREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class SetTerminationProtectionRequestPrivate;

class QTAWSEMR_EXPORT SetTerminationProtectionRequest : public EmrRequest {

public:
    SetTerminationProtectionRequest(const SetTerminationProtectionRequest &other);
    SetTerminationProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTerminationProtectionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

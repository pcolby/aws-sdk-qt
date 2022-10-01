// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTREQUEST_H
#define QTAWS_UPDATEENVIRONMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentRequestPrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentRequest : public ProtonRequest {

public:
    UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other);
    UpdateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_H
#define QTAWS_GETENVIRONMENTREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentRequestPrivate;

class QTAWSPROTON_EXPORT GetEnvironmentRequest : public ProtonRequest {

public:
    GetEnvironmentRequest(const GetEnvironmentRequest &other);
    GetEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

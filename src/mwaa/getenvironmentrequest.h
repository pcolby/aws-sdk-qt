// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_H
#define QTAWS_GETENVIRONMENTREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class GetEnvironmentRequestPrivate;

class QTAWSMWAA_EXPORT GetEnvironmentRequest : public MwaaRequest {

public:
    GetEnvironmentRequest(const GetEnvironmentRequest &other);
    GetEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif

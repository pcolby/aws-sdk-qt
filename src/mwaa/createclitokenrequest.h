// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLITOKENREQUEST_H
#define QTAWS_CREATECLITOKENREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class CreateCliTokenRequestPrivate;

class QTAWSMWAA_EXPORT CreateCliTokenRequest : public MwaaRequest {

public:
    CreateCliTokenRequest(const CreateCliTokenRequest &other);
    CreateCliTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCliTokenRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif

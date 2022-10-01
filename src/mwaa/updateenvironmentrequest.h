// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTREQUEST_H
#define QTAWS_UPDATEENVIRONMENTREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class UpdateEnvironmentRequestPrivate;

class QTAWSMWAA_EXPORT UpdateEnvironmentRequest : public MwaaRequest {

public:
    UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other);
    UpdateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif

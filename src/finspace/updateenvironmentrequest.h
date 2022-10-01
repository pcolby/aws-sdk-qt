// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTREQUEST_H
#define QTAWS_UPDATEENVIRONMENTREQUEST_H

#include "finspacerequest.h"

namespace QtAws {
namespace Finspace {

class UpdateEnvironmentRequestPrivate;

class QTAWSFINSPACE_EXPORT UpdateEnvironmentRequest : public FinspaceRequest {

public:
    UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other);
    UpdateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentRequest)

};

} // namespace Finspace
} // namespace QtAws

#endif

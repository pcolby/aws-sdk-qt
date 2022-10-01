// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASEPARAMETERSREQUEST_H
#define QTAWS_UPDATERELATIONALDATABASEPARAMETERSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseParametersRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateRelationalDatabaseParametersRequest : public LightsailRequest {

public:
    UpdateRelationalDatabaseParametersRequest(const UpdateRelationalDatabaseParametersRequest &other);
    UpdateRelationalDatabaseParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRelationalDatabaseParametersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEPARAMETERSREQUEST_H
#define QTAWS_GETRELATIONALDATABASEPARAMETERSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseParametersRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseParametersRequest : public LightsailRequest {

public:
    GetRelationalDatabaseParametersRequest(const GetRelationalDatabaseParametersRequest &other);
    GetRelationalDatabaseParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseParametersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

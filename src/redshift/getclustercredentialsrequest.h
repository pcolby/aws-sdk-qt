// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSREQUEST_H
#define QTAWS_GETCLUSTERCREDENTIALSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsRequestPrivate;

class QTAWSREDSHIFT_EXPORT GetClusterCredentialsRequest : public RedshiftRequest {

public:
    GetClusterCredentialsRequest(const GetClusterCredentialsRequest &other);
    GetClusterCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClusterCredentialsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

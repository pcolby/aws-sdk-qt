// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSREQUEST_H
#define QTAWS_GETCREDENTIALSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetCredentialsRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetCredentialsRequest : public RedshiftServerlessRequest {

public:
    GetCredentialsRequest(const GetCredentialsRequest &other);
    GetCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCredentialsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

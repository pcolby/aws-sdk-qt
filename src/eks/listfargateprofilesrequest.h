// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFARGATEPROFILESREQUEST_H
#define QTAWS_LISTFARGATEPROFILESREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class ListFargateProfilesRequestPrivate;

class QTAWSEKS_EXPORT ListFargateProfilesRequest : public EksRequest {

public:
    ListFargateProfilesRequest(const ListFargateProfilesRequest &other);
    ListFargateProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFargateProfilesRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

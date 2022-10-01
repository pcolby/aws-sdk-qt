// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSECURITYPROFILESREQUEST_H
#define QTAWS_SEARCHSECURITYPROFILESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class SearchSecurityProfilesRequestPrivate;

class QTAWSCONNECT_EXPORT SearchSecurityProfilesRequest : public ConnectRequest {

public:
    SearchSecurityProfilesRequest(const SearchSecurityProfilesRequest &other);
    SearchSecurityProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSecurityProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

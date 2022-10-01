// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPROFILESREQUEST_H
#define QTAWS_MERGEPROFILESREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class MergeProfilesRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT MergeProfilesRequest : public CustomerProfilesRequest {

public:
    MergeProfilesRequest(const MergeProfilesRequest &other);
    MergeProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeProfilesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif

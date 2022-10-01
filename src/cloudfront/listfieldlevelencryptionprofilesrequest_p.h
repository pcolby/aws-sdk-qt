// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESREQUEST_P_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listfieldlevelencryptionprofilesrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionProfilesRequest;

class ListFieldLevelEncryptionProfilesRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListFieldLevelEncryptionProfilesRequestPrivate(const CloudFrontRequest::Action action,
                                   ListFieldLevelEncryptionProfilesRequest * const q);
    ListFieldLevelEncryptionProfilesRequestPrivate(const ListFieldLevelEncryptionProfilesRequestPrivate &other,
                                   ListFieldLevelEncryptionProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFieldLevelEncryptionProfilesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

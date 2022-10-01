// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSREQUEST_P_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listfieldlevelencryptionconfigsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionConfigsRequest;

class ListFieldLevelEncryptionConfigsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListFieldLevelEncryptionConfigsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListFieldLevelEncryptionConfigsRequest * const q);
    ListFieldLevelEncryptionConfigsRequestPrivate(const ListFieldLevelEncryptionConfigsRequestPrivate &other,
                                   ListFieldLevelEncryptionConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFieldLevelEncryptionConfigsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif

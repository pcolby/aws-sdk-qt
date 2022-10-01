// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGKEYSREQUEST_H
#define QTAWS_GETTAGKEYSREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagKeysRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT GetTagKeysRequest : public ResourceGroupsTaggingRequest {

public:
    GetTagKeysRequest(const GetTagKeysRequest &other);
    GetTagKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagKeysRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

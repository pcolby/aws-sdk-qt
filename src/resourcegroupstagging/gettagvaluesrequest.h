// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGVALUESREQUEST_H
#define QTAWS_GETTAGVALUESREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagValuesRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT GetTagValuesRequest : public ResourceGroupsTaggingRequest {

public:
    GetTagValuesRequest(const GetTagValuesRequest &other);
    GetTagValuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagValuesRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

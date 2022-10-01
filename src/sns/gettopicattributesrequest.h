// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICATTRIBUTESREQUEST_H
#define QTAWS_GETTOPICATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class GetTopicAttributesRequestPrivate;

class QTAWSSNS_EXPORT GetTopicAttributesRequest : public SnsRequest {

public:
    GetTopicAttributesRequest(const GetTopicAttributesRequest &other);
    GetTopicAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTopicAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

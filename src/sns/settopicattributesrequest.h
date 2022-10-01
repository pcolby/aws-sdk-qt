// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTOPICATTRIBUTESREQUEST_H
#define QTAWS_SETTOPICATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SetTopicAttributesRequestPrivate;

class QTAWSSNS_EXPORT SetTopicAttributesRequest : public SnsRequest {

public:
    SetTopicAttributesRequest(const SetTopicAttributesRequest &other);
    SetTopicAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTopicAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICREQUEST_H
#define QTAWS_DELETETOPICREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class DeleteTopicRequestPrivate;

class QTAWSSNS_EXPORT DeleteTopicRequest : public SnsRequest {

public:
    DeleteTopicRequest(const DeleteTopicRequest &other);
    DeleteTopicRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTopicRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

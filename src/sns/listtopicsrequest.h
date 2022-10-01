// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICSREQUEST_H
#define QTAWS_LISTTOPICSREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ListTopicsRequestPrivate;

class QTAWSSNS_EXPORT ListTopicsRequest : public SnsRequest {

public:
    ListTopicsRequest(const ListTopicsRequest &other);
    ListTopicsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif

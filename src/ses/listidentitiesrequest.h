// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITIESREQUEST_H
#define QTAWS_LISTIDENTITIESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class ListIdentitiesRequestPrivate;

class QTAWSSES_EXPORT ListIdentitiesRequest : public SesRequest {

public:
    ListIdentitiesRequest(const ListIdentitiesRequest &other);
    ListIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentitiesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

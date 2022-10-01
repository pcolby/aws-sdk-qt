// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETSREQUEST_H
#define QTAWS_LISTFLEETSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ListFleetsRequestPrivate;

class QTAWSGAMELIFT_EXPORT ListFleetsRequest : public GameLiftRequest {

public:
    ListFleetsRequest(const ListFleetsRequest &other);
    ListFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFleetsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

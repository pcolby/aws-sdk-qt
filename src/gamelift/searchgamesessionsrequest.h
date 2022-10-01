// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGAMESESSIONSREQUEST_H
#define QTAWS_SEARCHGAMESESSIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class SearchGameSessionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT SearchGameSessionsRequest : public GameLiftRequest {

public:
    SearchGameSessionsRequest(const SearchGameSessionsRequest &other);
    SearchGameSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchGameSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

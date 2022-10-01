// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCRIPTSREQUEST_H
#define QTAWS_LISTSCRIPTSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ListScriptsRequestPrivate;

class QTAWSGAMELIFT_EXPORT ListScriptsRequest : public GameLiftRequest {

public:
    ListScriptsRequest(const ListScriptsRequest &other);
    ListScriptsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScriptsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

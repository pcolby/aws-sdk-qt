// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASREQUEST_H
#define QTAWS_DELETEALIASREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteAliasRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteAliasRequest : public GameLiftRequest {

public:
    DeleteAliasRequest(const DeleteAliasRequest &other);
    DeleteAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAliasRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCRIPTREQUEST_H
#define QTAWS_UPDATESCRIPTREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateScriptRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateScriptRequest : public GameLiftRequest {

public:
    UpdateScriptRequest(const UpdateScriptRequest &other);
    UpdateScriptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScriptRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

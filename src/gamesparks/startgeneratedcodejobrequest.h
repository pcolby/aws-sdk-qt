// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGENERATEDCODEJOBREQUEST_H
#define QTAWS_STARTGENERATEDCODEJOBREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class StartGeneratedCodeJobRequestPrivate;

class QTAWSGAMESPARKS_EXPORT StartGeneratedCodeJobRequest : public GameSparksRequest {

public:
    StartGeneratedCodeJobRequest(const StartGeneratedCodeJobRequest &other);
    StartGeneratedCodeJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartGeneratedCodeJobRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

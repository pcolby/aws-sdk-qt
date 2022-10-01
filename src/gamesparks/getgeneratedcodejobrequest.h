// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDCODEJOBREQUEST_H
#define QTAWS_GETGENERATEDCODEJOBREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGeneratedCodeJobRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetGeneratedCodeJobRequest : public GameSparksRequest {

public:
    GetGeneratedCodeJobRequest(const GetGeneratedCodeJobRequest &other);
    GetGeneratedCodeJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeneratedCodeJobRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif

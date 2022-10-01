// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONALIZEDRANKINGREQUEST_H
#define QTAWS_GETPERSONALIZEDRANKINGREQUEST_H

#include "personalizeruntimerequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetPersonalizedRankingRequestPrivate;

class QTAWSPERSONALIZERUNTIME_EXPORT GetPersonalizedRankingRequest : public PersonalizeRuntimeRequest {

public:
    GetPersonalizedRankingRequest(const GetPersonalizedRankingRequest &other);
    GetPersonalizedRankingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPersonalizedRankingRequest)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif

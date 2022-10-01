// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSREQUEST_H
#define QTAWS_GETRECOMMENDATIONSREQUEST_H

#include "personalizeruntimerequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetRecommendationsRequestPrivate;

class QTAWSPERSONALIZERUNTIME_EXPORT GetRecommendationsRequest : public PersonalizeRuntimeRequest {

public:
    GetRecommendationsRequest(const GetRecommendationsRequest &other);
    GetRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationsRequest)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif

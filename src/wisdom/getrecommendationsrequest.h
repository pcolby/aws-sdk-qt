// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSREQUEST_H
#define QTAWS_GETRECOMMENDATIONSREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetRecommendationsRequestPrivate;

class QTAWSWISDOM_EXPORT GetRecommendationsRequest : public WisdomRequest {

public:
    GetRecommendationsRequest(const GetRecommendationsRequest &other);
    GetRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif

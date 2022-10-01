// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDEDINTENTSREQUEST_H
#define QTAWS_LISTRECOMMENDEDINTENTSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListRecommendedIntentsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListRecommendedIntentsRequest : public LexModelsV2Request {

public:
    ListRecommendedIntentsRequest(const ListRecommendedIntentsRequest &other);
    ListRecommendedIntentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendedIntentsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

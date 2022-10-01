// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTREQUEST_H
#define QTAWS_DESCRIBEBOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotRequest : public LexModelsV2Request {

public:
    DescribeBotRequest(const DescribeBotRequest &other);
    DescribeBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

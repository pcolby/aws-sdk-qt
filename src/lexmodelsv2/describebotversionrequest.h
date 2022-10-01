// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTVERSIONREQUEST_H
#define QTAWS_DESCRIBEBOTVERSIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotVersionRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotVersionRequest : public LexModelsV2Request {

public:
    DescribeBotVersionRequest(const DescribeBotVersionRequest &other);
    DescribeBotVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotVersionRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTLOCALEREQUEST_H
#define QTAWS_DESCRIBEBOTLOCALEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotLocaleRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeBotLocaleRequest : public LexModelsV2Request {

public:
    DescribeBotLocaleRequest(const DescribeBotLocaleRequest &other);
    DescribeBotLocaleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELSV2REQUEST_P_H
#define QTAWS_LEXMODELSV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class LexModelsV2Request;

class LexModelsV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LexModelsV2Request::Action action; ///< LexModelsV2 action to be performed.
    QString apiVersion;        ///< LexModelsV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LexModelsV2 request (query string) parameters. @todo?

    LexModelsV2RequestPrivate(const LexModelsV2Request::Action action, LexModelsV2Request * const q);
    LexModelsV2RequestPrivate(const LexModelsV2RequestPrivate &other, LexModelsV2Request * const q);

    static QString toString(const LexModelsV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(LexModelsV2Request)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif

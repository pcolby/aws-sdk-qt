// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXPATTERNSETREQUEST_H
#define QTAWS_CREATEREGEXPATTERNSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class CreateRegexPatternSetRequestPrivate;

class QTAWSWAFV2_EXPORT CreateRegexPatternSetRequest : public Wafv2Request {

public:
    CreateRegexPatternSetRequest(const CreateRegexPatternSetRequest &other);
    CreateRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

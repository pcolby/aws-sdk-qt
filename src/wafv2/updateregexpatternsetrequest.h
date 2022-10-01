// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETREQUEST_H
#define QTAWS_UPDATEREGEXPATTERNSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRegexPatternSetRequestPrivate;

class QTAWSWAFV2_EXPORT UpdateRegexPatternSetRequest : public Wafv2Request {

public:
    UpdateRegexPatternSetRequest(const UpdateRegexPatternSetRequest &other);
    UpdateRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

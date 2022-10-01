// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETREQUEST_H
#define QTAWS_UPDATEREGEXPATTERNSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateRegexPatternSetRequestPrivate;

class QTAWSWAF_EXPORT UpdateRegexPatternSetRequest : public WafRequest {

public:
    UpdateRegexPatternSetRequest(const UpdateRegexPatternSetRequest &other);
    UpdateRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

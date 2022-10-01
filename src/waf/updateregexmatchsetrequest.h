// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXMATCHSETREQUEST_H
#define QTAWS_UPDATEREGEXMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateRegexMatchSetRequestPrivate;

class QTAWSWAF_EXPORT UpdateRegexMatchSetRequest : public WafRequest {

public:
    UpdateRegexMatchSetRequest(const UpdateRegexMatchSetRequest &other);
    UpdateRegexMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegexMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

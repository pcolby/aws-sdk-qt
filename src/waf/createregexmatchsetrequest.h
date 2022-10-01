// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXMATCHSETREQUEST_H
#define QTAWS_CREATEREGEXMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateRegexMatchSetRequestPrivate;

class QTAWSWAF_EXPORT CreateRegexMatchSetRequest : public WafRequest {

public:
    CreateRegexMatchSetRequest(const CreateRegexMatchSetRequest &other);
    CreateRegexMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegexMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

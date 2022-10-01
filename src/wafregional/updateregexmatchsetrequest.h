// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXMATCHSETREQUEST_H
#define QTAWS_UPDATEREGEXMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRegexMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateRegexMatchSetRequest : public WafRegionalRequest {

public:
    UpdateRegexMatchSetRequest(const UpdateRegexMatchSetRequest &other);
    UpdateRegexMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegexMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

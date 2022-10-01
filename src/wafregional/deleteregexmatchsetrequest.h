// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXMATCHSETREQUEST_H
#define QTAWS_DELETEREGEXMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRegexMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteRegexMatchSetRequest : public WafRegionalRequest {

public:
    DeleteRegexMatchSetRequest(const DeleteRegexMatchSetRequest &other);
    DeleteRegexMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegexMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

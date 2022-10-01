// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETREQUEST_H
#define QTAWS_DELETEREGEXPATTERNSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DeleteRegexPatternSetRequestPrivate;

class QTAWSWAFV2_EXPORT DeleteRegexPatternSetRequest : public Wafv2Request {

public:
    DeleteRegexPatternSetRequest(const DeleteRegexPatternSetRequest &other);
    DeleteRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETREQUEST_H
#define QTAWS_DELETEREGEXPATTERNSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class DeleteRegexPatternSetRequestPrivate;

class QTAWSWAF_EXPORT DeleteRegexPatternSetRequest : public WafRequest {

public:
    DeleteRegexPatternSetRequest(const DeleteRegexPatternSetRequest &other);
    DeleteRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

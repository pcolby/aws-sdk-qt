// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBYTEMATCHSETREQUEST_H
#define QTAWS_CREATEBYTEMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateByteMatchSetRequestPrivate;

class QTAWSWAF_EXPORT CreateByteMatchSetRequest : public WafRequest {

public:
    CreateByteMatchSetRequest(const CreateByteMatchSetRequest &other);
    CreateByteMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

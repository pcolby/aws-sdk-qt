// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBYTEMATCHSETREQUEST_H
#define QTAWS_UPDATEBYTEMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateByteMatchSetRequestPrivate;

class QTAWSWAF_EXPORT UpdateByteMatchSetRequest : public WafRequest {

public:
    UpdateByteMatchSetRequest(const UpdateByteMatchSetRequest &other);
    UpdateByteMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

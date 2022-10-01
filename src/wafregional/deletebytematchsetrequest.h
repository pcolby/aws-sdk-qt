// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBYTEMATCHSETREQUEST_H
#define QTAWS_DELETEBYTEMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteByteMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteByteMatchSetRequest : public WafRegionalRequest {

public:
    DeleteByteMatchSetRequest(const DeleteByteMatchSetRequest &other);
    DeleteByteMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteByteMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEXSSMATCHSETREQUEST_H
#define QTAWS_DELETEXSSMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteXssMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteXssMatchSetRequest : public WafRegionalRequest {

public:
    DeleteXssMatchSetRequest(const DeleteXssMatchSetRequest &other);
    DeleteXssMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

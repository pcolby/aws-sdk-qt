// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOMATCHSETREQUEST_H
#define QTAWS_DELETEGEOMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class DeleteGeoMatchSetRequestPrivate;

class QTAWSWAF_EXPORT DeleteGeoMatchSetRequest : public WafRequest {

public:
    DeleteGeoMatchSetRequest(const DeleteGeoMatchSetRequest &other);
    DeleteGeoMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGeoMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

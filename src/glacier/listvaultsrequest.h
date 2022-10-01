// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVAULTSREQUEST_H
#define QTAWS_LISTVAULTSREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class ListVaultsRequestPrivate;

class QTAWSGLACIER_EXPORT ListVaultsRequest : public GlacierRequest {

public:
    ListVaultsRequest(const ListVaultsRequest &other);
    ListVaultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVaultsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif

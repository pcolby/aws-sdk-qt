// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPDATESREQUEST_H
#define QTAWS_LISTUPDATESREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class ListUpdatesRequestPrivate;

class QTAWSEKS_EXPORT ListUpdatesRequest : public EksRequest {

public:
    ListUpdatesRequest(const ListUpdatesRequest &other);
    ListUpdatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUpdatesRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

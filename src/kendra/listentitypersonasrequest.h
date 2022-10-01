// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYPERSONASREQUEST_H
#define QTAWS_LISTENTITYPERSONASREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListEntityPersonasRequestPrivate;

class QTAWSKENDRA_EXPORT ListEntityPersonasRequest : public KendraRequest {

public:
    ListEntityPersonasRequest(const ListEntityPersonasRequest &other);
    ListEntityPersonasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntityPersonasRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONSREQUEST_H
#define QTAWS_LISTACTIONSREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class ListActionsRequestPrivate;

class QTAWSFIS_EXPORT ListActionsRequest : public FisRequest {

public:
    ListActionsRequest(const ListActionsRequest &other);
    ListActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionsRequest)

};

} // namespace Fis
} // namespace QtAws

#endif

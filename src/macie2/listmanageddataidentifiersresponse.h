// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDDATAIDENTIFIERSRESPONSE_H
#define QTAWS_LISTMANAGEDDATAIDENTIFIERSRESPONSE_H

#include "macie2response.h"
#include "listmanageddataidentifiersrequest.h"

namespace QtAws {
namespace Macie2 {

class ListManagedDataIdentifiersResponsePrivate;

class QTAWSMACIE2_EXPORT ListManagedDataIdentifiersResponse : public Macie2Response {
    Q_OBJECT

public:
    ListManagedDataIdentifiersResponse(const ListManagedDataIdentifiersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedDataIdentifiersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedDataIdentifiersResponse)
    Q_DISABLE_COPY(ListManagedDataIdentifiersResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
